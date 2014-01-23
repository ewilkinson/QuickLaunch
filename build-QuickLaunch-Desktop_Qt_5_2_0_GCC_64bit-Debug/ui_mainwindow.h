/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTemp;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *commandInputText;
    QPushButton *runButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QListView *commandColumn;
    QHBoxLayout *horizontalLayout;
    QPushButton *LaunchAllButton;
    QPushButton *addTable;
    QPushButton *removeTable;
    QPushButton *loadFileButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearButton;
    QPushButton *killAllButton;
    QMenuBar *menuBar;
    QMenu *menuQuick_Launch;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1288, 632);
        QPalette palette;
        QBrush brush(QColor(241, 241, 241, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(102, 102, 102, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(91, 91, 91, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(4, 4, 4, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush5(QColor(72, 72, 72, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QBrush brush6(QColor(120, 120, 120, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        actionTemp = new QAction(MainWindow);
        actionTemp->setObjectName(QStringLiteral("actionTemp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 42, 301, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 10));

        verticalLayout->addWidget(label);

        commandInputText = new QLineEdit(layoutWidget);
        commandInputText->setObjectName(QStringLiteral("commandInputText"));
        commandInputText->setMaxLength(32767);

        verticalLayout->addWidget(commandInputText);

        runButton = new QPushButton(layoutWidget);
        runButton->setObjectName(QStringLiteral("runButton"));
        runButton->setMinimumSize(QSize(100, 23));
        runButton->setMaximumSize(QSize(100, 25));

        verticalLayout->addWidget(runButton);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 140, 411, 421));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        commandColumn = new QListView(widget);
        commandColumn->setObjectName(QStringLiteral("commandColumn"));
        commandColumn->setMinimumSize(QSize(200, 200));

        verticalLayout_2->addWidget(commandColumn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LaunchAllButton = new QPushButton(widget);
        LaunchAllButton->setObjectName(QStringLiteral("LaunchAllButton"));
        LaunchAllButton->setMinimumSize(QSize(100, 23));
        LaunchAllButton->setMaximumSize(QSize(100, 33));

        horizontalLayout->addWidget(LaunchAllButton);

        addTable = new QPushButton(widget);
        addTable->setObjectName(QStringLiteral("addTable"));
        addTable->setMinimumSize(QSize(100, 23));

        horizontalLayout->addWidget(addTable);

        removeTable = new QPushButton(widget);
        removeTable->setObjectName(QStringLiteral("removeTable"));
        removeTable->setMinimumSize(QSize(100, 23));

        horizontalLayout->addWidget(removeTable);

        loadFileButton = new QPushButton(widget);
        loadFileButton->setObjectName(QStringLiteral("loadFileButton"));

        horizontalLayout->addWidget(loadFileButton);


        verticalLayout_2->addLayout(horizontalLayout);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(460, 30, 761, 531));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget1);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette1;
        QBrush brush7(QColor(2, 2, 2, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        tabWidget->setPalette(palette1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout_3->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        clearButton = new QPushButton(widget1);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMinimumSize(QSize(100, 23));
        clearButton->setMaximumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(clearButton);

        killAllButton = new QPushButton(widget1);
        killAllButton->setObjectName(QStringLiteral("killAllButton"));
        killAllButton->setMinimumSize(QSize(100, 23));
        killAllButton->setMaximumSize(QSize(100, 23));

        horizontalLayout_2->addWidget(killAllButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        clearButton->raise();
        tabWidget->raise();
        layoutWidget->raise();
        commandColumn->raise();
        LaunchAllButton->raise();
        addTable->raise();
        removeTable->raise();
        killAllButton->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1288, 21));
        menuQuick_Launch = new QMenu(menuBar);
        menuQuick_Launch->setObjectName(QStringLiteral("menuQuick_Launch"));
        menuQuick_Launch->setSeparatorsCollapsible(false);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuQuick_Launch->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionTemp->setText(QApplication::translate("MainWindow", "Temp", 0));
        label->setText(QApplication::translate("MainWindow", "Command Line Argument", 0));
        commandInputText->setInputMask(QString());
        commandInputText->setText(QString());
        commandInputText->setPlaceholderText(QApplication::translate("MainWindow", "Type command line argument here", 0));
        runButton->setText(QApplication::translate("MainWindow", "Run", 0));
        LaunchAllButton->setText(QApplication::translate("MainWindow", "Run All", 0));
        addTable->setText(QApplication::translate("MainWindow", "Add", 0));
        removeTable->setText(QApplication::translate("MainWindow", "Remove", 0));
        loadFileButton->setText(QApplication::translate("MainWindow", "Load...", 0));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        killAllButton->setText(QApplication::translate("MainWindow", "Kill All", 0));
        menuQuick_Launch->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
