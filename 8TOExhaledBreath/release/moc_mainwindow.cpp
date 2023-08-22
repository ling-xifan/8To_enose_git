/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "updateDisplay"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "Func_start"
QT_MOC_LITERAL(4, 37, 9), // "Func_stop"
QT_MOC_LITERAL(5, 47, 10), // "Clear_data"
QT_MOC_LITERAL(6, 58, 10), // "Draw_Graph"
QT_MOC_LITERAL(7, 69, 10), // "save_excel"
QT_MOC_LITERAL(8, 80, 8), // "save_txt"
QT_MOC_LITERAL(9, 89, 10), // "Time_input"
QT_MOC_LITERAL(10, 100, 10), // "save_graph"
QT_MOC_LITERAL(11, 111, 12), // "storeMessage"
QT_MOC_LITERAL(12, 124, 14), // "Series_display"
QT_MOC_LITERAL(13, 139, 17), // "Choose_Channel1_5"
QT_MOC_LITERAL(14, 157, 18), // "Choose_Channel6_10"
QT_MOC_LITERAL(15, 176, 11), // "Volt_Change"
QT_MOC_LITERAL(16, 188, 5), // "ViewT"
QT_MOC_LITERAL(17, 194, 6), // "ViewRH"
QT_MOC_LITERAL(18, 201, 9), // "Volt_Send"
QT_MOC_LITERAL(19, 211, 11), // "Set_Y_Range"
QT_MOC_LITERAL(20, 223, 5), // "RunPY"
QT_MOC_LITERAL(21, 229, 6) // "InitPy"

    },
    "MainWindow\0updateDisplay\0\0Func_start\0"
    "Func_stop\0Clear_data\0Draw_Graph\0"
    "save_excel\0save_txt\0Time_input\0"
    "save_graph\0storeMessage\0Series_display\0"
    "Choose_Channel1_5\0Choose_Channel6_10\0"
    "Volt_Change\0ViewT\0ViewRH\0Volt_Send\0"
    "Set_Y_Range\0RunPY\0InitPy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08 /* Private */,
       3,    0,  115,    2, 0x08 /* Private */,
       4,    0,  116,    2, 0x08 /* Private */,
       5,    0,  117,    2, 0x08 /* Private */,
       6,    0,  118,    2, 0x08 /* Private */,
       7,    0,  119,    2, 0x08 /* Private */,
       8,    0,  120,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    0,  127,    2, 0x08 /* Private */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    0,  129,    2, 0x08 /* Private */,
      18,    0,  130,    2, 0x08 /* Private */,
      19,    0,  131,    2, 0x08 /* Private */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplay(); break;
        case 1: _t->Func_start(); break;
        case 2: _t->Func_stop(); break;
        case 3: _t->Clear_data(); break;
        case 4: _t->Draw_Graph(); break;
        case 5: _t->save_excel(); break;
        case 6: _t->save_txt(); break;
        case 7: _t->Time_input(); break;
        case 8: _t->save_graph(); break;
        case 9: _t->storeMessage(); break;
        case 10: _t->Series_display(); break;
        case 11: _t->Choose_Channel1_5(); break;
        case 12: _t->Choose_Channel6_10(); break;
        case 13: _t->Volt_Change(); break;
        case 14: _t->ViewT(); break;
        case 15: _t->ViewRH(); break;
        case 16: _t->Volt_Send(); break;
        case 17: _t->Set_Y_Range(); break;
        case 18: _t->RunPY(); break;
        case 19: _t->InitPy(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
