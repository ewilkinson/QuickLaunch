#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QVector>
#include <QHash>
#include <QTextEdit>
#include <QStringListModel>

//#define Q_WS_WIN

#if (!defined(Q_OS_WIN32) && !defined(Q_OS_WINCE)) || defined(qdoc)
typedef qint64 Q_PID;
#else
typedef struct _PROCESS_INFORMATION *Q_PID;
#endif

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_clearButton_clicked();
    void on_runButton_clicked();
    void printOutput();
    void printError();
    void finished( int exitCode, QProcess::ExitStatus exitStatus );
    void error( QProcess::ProcessError error );

    void on_tabWidget_tabCloseRequested(int index);

    void on_commandInputText_returnPressed();

    void on_addTable_clicked();

    void on_removeTable_clicked();

    void on_LaunchAllButton_clicked();

    void on_commandColumn_doubleClicked(const QModelIndex &index);

    void on_killAllButton_clicked();

    void on_loadFileButton_clicked();

private:
    Ui::MainWindow *ui;
    //QProcess *ps;
    //QVector<QTextEdit*> textEditors;
    QHash<QString, QTextEdit*> textEditors;
    QHash<QString, QProcess*> processes;
    QTextEdit* determineEditor(QProcess *ps);

    QString alertHtml;
    QString warnHtml;
    QString endHtml;

    quint64 getProcessID(const QProcess* proc);
    void KillDeleteProcess(QProcess * ps);
    QProcess* StartNewProcess(QString input);
    void AppLaunchProcess(QString input);

    QStringListModel *model;

};

#endif // MAINWINDOW_H
