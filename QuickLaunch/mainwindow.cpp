#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>

QProcess * MainWindow::StartNewProcess(QString input){
    QProcess * ps = new QProcess(this);
    ps->setProcessChannelMode(QProcess::MergedChannels);
    ps->setProcessEnvironment(QProcessEnvironment::systemEnvironment());

    connect (ps, SIGNAL(readyReadStandardOutput()), this, SLOT(printOutput()));
    connect (ps, SIGNAL(readyReadStandardError()), this, SLOT(printError()));
    connect( ps, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(finished(int,QProcess::ExitStatus)) );
    connect( ps, SIGNAL(error(QProcess::ProcessError)), this, SLOT(error(QProcess::ProcessError)) );


//    QString program = "cmd";
//    QStringList arguments;
//    arguments << "/C";
//    arguments.append(input);
    QStringList arguments = input.split(" ");
    QString command = arguments.at(0);
    arguments.removeAt(0);
    //ps->start(input, QStringList());
    ps->start(command, arguments);
   // ps->start("/bin/bash", QStringList() << "-c" << input);
    if(ps){
        ps->waitForStarted(-1);
    }
    return ps;
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    alertHtml = "<font color=\"Red\">";
    warnHtml = "<font color=\"Yellow\">";
    endHtml = "</font><br>";

    model = new QStringListModel(this);
    QStringList list;
    list << "C:\\VSProjects\\ConsolePrintout\\Release\\ConsolePrintout" << "C:\\VSProjects\\ConsolePrintout\\Release\\ConsolePrintout";
    model->setStringList(list);

    ui->commandColumn->setModel(model);
    ui->commandColumn->setEditTriggers(QAbstractItemView::AnyKeyPressed);
}

MainWindow::~MainWindow()
{
    QList<QProcess*> listProcess = processes.values();
    for(int i = 0; i < listProcess.size(); i++)
    {
        QProcess * ps = listProcess[i];
        KillDeleteProcess(ps);
    }
    delete ui;
}

void MainWindow::on_clearButton_clicked()
{
    QTextEdit * editor = (QTextEdit *)ui->tabWidget->currentWidget();
    if(editor) editor->clear();
}


void MainWindow::on_runButton_clicked()
{
    QString input = ui->commandInputText->text().trimmed();

    AppLaunchProcess(input);

}

void MainWindow::AppLaunchProcess(QString input)
{
    if(input.isEmpty() || input.isNull())
    {
        return;
    }
    QProcess * ps = StartNewProcess(input);

    if(!ps)
    {
        QMessageBox::critical(this, "Error", "Your program could not be launched");
        return;
    }

    QTextEdit * textEdit = new QTextEdit(this);
    QString label = input;
    QString pid = QString::number(getProcessID(ps));
    label = label  + " [" + pid + "]";
    textEdit->setReadOnly(true);
    textEdit->setToolTip(pid);
    ui->tabWidget->addTab(textEdit,label);
    ui->tabWidget->setCurrentIndex(ui->tabWidget->indexOf(textEdit));
    textEditors.insert(pid, textEdit);
    processes.insert(pid,ps);
}

void MainWindow::printOutput()
{
    QProcess * ps = (QProcess*)QObject::sender();
    QTextEdit * outputForm = determineEditor(ps);
    if(outputForm){
        QByteArray byteArray = ps->readAllStandardOutput();
        QStringList strLines = QString(byteArray).split("\n");

        QString testCase = "Hello World!";

        foreach (QString line, strLines){
            if(line.trimmed() == testCase)
            {
                line = alertHtml + line;
                line = line + endHtml;
                QString body = outputForm->toHtml();
                body += line;
                outputForm->setHtml(body);
            }
            else{
                outputForm->append(line);
            }
        }
    }
}

QTextEdit* MainWindow::determineEditor(QProcess *ps)
{
    QString pid = QString::number(getProcessID(ps));
    return textEditors.value(pid);
}

void MainWindow::printError()
{

    QProcess * ps = (QProcess*)QObject::sender();
    QTextEdit * outputForm = determineEditor(ps);

    if(outputForm){
        QByteArray byteArray = ps->readAllStandardError();
        QStringList strLines = QString(byteArray).split("\n");

        foreach (QString line, strLines){
            line = line.trimmed();
            line = alertHtml + line;
            line = line + endHtml;
            outputForm->setHtml(line);
        }
    }
}

void MainWindow::finished( int exitCode, QProcess::ExitStatus exitStatus )
{
    qDebug() << "The process has finished.";
    qDebug( "Exit code: %i", exitCode );
    qDebug( "Exit status: %i", exitStatus );
}

void MainWindow::error( QProcess::ProcessError error )
{
    qDebug() << "Error!";
    qDebug() << error;
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    QTextEdit * editor = (QTextEdit*)ui->tabWidget->widget(index);
    QString key = textEditors.key(editor);
    textEditors.remove(key);
    ui->tabWidget->removeTab(index);
    QProcess * ps = processes.value(key);
    KillDeleteProcess(ps);
}

void MainWindow::on_commandInputText_returnPressed()
{
    this->on_runButton_clicked();
}

quint64 MainWindow::getProcessID(const QProcess* proc)
{
#ifdef Q_WS_WIN
    struct _PROCESS_INFORMATION* procinfo = proc->pid();
    return procinfo->dwProcessId;
#else // Linux
    return proc->pid();
#endif // Q_WS_WIN
}

void MainWindow::KillDeleteProcess(QProcess * ps)
{
    QString pid = QString::number(getProcessID(ps));
    if(pid != "0"){
        ps->terminate();
        ps->close();
        ps->kill();
        ps->waitForFinished(-1);
    }
    delete ps;
}

void MainWindow::on_addTable_clicked()
{
    int row = ui->commandColumn->currentIndex().row();
    if(row == -1)
    {
        row = model->rowCount();
    }
    model->insertRow(row);

    QModelIndex index = model->index(row);
    ui->commandColumn->setCurrentIndex(index);
    ui->commandColumn->edit(index);
}

void MainWindow::on_removeTable_clicked()
{
    model->removeRow(ui->commandColumn->currentIndex().row());
}

void MainWindow::on_LaunchAllButton_clicked()
{
    QStringList commands = model->stringList();
    for(int i = 0; i < commands.size(); i++)
    {
        QString command = commands[i];
        AppLaunchProcess(command);
    }
}

void MainWindow::on_commandColumn_doubleClicked(const QModelIndex &index)
{
    QString command;
    QVariant var = model->data(index,Qt::DisplayRole);
    command = var.toString();
    AppLaunchProcess(command);
}

void MainWindow::on_killAllButton_clicked()
{
    int index = ui->tabWidget->count();
    while(index--){
        QTextEdit * editor = (QTextEdit*)ui->tabWidget->widget(index);
        QString key = textEditors.key(editor);
        textEditors.remove(key);
        ui->tabWidget->removeTab(index);
        QProcess * ps = processes.value(key);
        KillDeleteProcess(ps);
    }
}

void MainWindow::on_loadFileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Open Command List"), "",
           tr("Text File (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
    {
        return;
    }
    else {

        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }

        QTextStream in(&file);
        QStringList listCommands;
        while(!in.atEnd())
        {
            QString line = in.readLine();
            listCommands << line;
        }
        if (listCommands.isEmpty()) {
             QMessageBox::information(this, tr("No commands in file"),
                 tr("The file you are attempting to open contains no commands."));
         }
        else {
            model->setStringList(listCommands);
        }
    }
}
