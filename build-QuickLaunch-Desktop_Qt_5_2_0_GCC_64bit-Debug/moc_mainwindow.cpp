/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QuickLaunch/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 22),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 20),
QT_MOC_LITERAL(4, 56, 11),
QT_MOC_LITERAL(5, 68, 10),
QT_MOC_LITERAL(6, 79, 8),
QT_MOC_LITERAL(7, 88, 8),
QT_MOC_LITERAL(8, 97, 20),
QT_MOC_LITERAL(9, 118, 10),
QT_MOC_LITERAL(10, 129, 5),
QT_MOC_LITERAL(11, 135, 22),
QT_MOC_LITERAL(12, 158, 30),
QT_MOC_LITERAL(13, 189, 5),
QT_MOC_LITERAL(14, 195, 33),
QT_MOC_LITERAL(15, 229, 19),
QT_MOC_LITERAL(16, 249, 22),
QT_MOC_LITERAL(17, 272, 26),
QT_MOC_LITERAL(18, 299, 30),
QT_MOC_LITERAL(19, 330, 24),
QT_MOC_LITERAL(20, 355, 25)
    },
    "MainWindow\0on_clearButton_clicked\0\0"
    "on_runButton_clicked\0printOutput\0"
    "printError\0finished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0error\0"
    "QProcess::ProcessError\0"
    "on_tabWidget_tabCloseRequested\0index\0"
    "on_commandInputText_returnPressed\0"
    "on_addTable_clicked\0on_removeTable_clicked\0"
    "on_LaunchAllButton_clicked\0"
    "on_commandColumn_doubleClicked\0"
    "on_killAllButton_clicked\0"
    "on_loadFileButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    0,   85,    2, 0x08,
       4,    0,   86,    2, 0x08,
       5,    0,   87,    2, 0x08,
       6,    2,   88,    2, 0x08,
      10,    1,   93,    2, 0x08,
      12,    1,   96,    2, 0x08,
      14,    0,   99,    2, 0x08,
      15,    0,  100,    2, 0x08,
      16,    0,  101,    2, 0x08,
      17,    0,  102,    2, 0x08,
      18,    1,  103,    2, 0x08,
      19,    0,  106,    2, 0x08,
      20,    0,  107,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 11,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_clearButton_clicked(); break;
        case 1: _t->on_runButton_clicked(); break;
        case 2: _t->printOutput(); break;
        case 3: _t->printError(); break;
        case 4: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_commandInputText_returnPressed(); break;
        case 8: _t->on_addTable_clicked(); break;
        case 9: _t->on_removeTable_clicked(); break;
        case 10: _t->on_LaunchAllButton_clicked(); break;
        case 11: _t->on_commandColumn_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_killAllButton_clicked(); break;
        case 13: _t->on_loadFileButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
