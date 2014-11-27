/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Nov 13 12:32:10 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      46,   37,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     134,   37,   11,   11, 0x08,
     163,   37,   11,   11, 0x08,
     192,   37,   11,   11, 0x08,
     221,   37,   11,   11, 0x08,
     256,   37,   11,   11, 0x08,
     284,   37,   11,   11, 0x08,
     312,   37,   11,   11, 0x08,
     340,   37,   11,   11, 0x08,
     374,   37,   11,   11, 0x08,
     401,   37,   11,   11, 0x08,
     428,   37,   11,   11, 0x08,
     455,   37,   11,   11, 0x08,
     488,   11,   11,   11, 0x08,
     517,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_PushButton1_clicked()\0"
    "position\0on_changeBaseSpeed_sliderMoved(int)\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pitch_kp_sliderMoved(int)\0"
    "on_pitch_ki_sliderMoved(int)\0"
    "on_pitch_kd_sliderMoved(int)\0"
    "on_pitch_setpoint_sliderMoved(int)\0"
    "on_roll_kp_sliderMoved(int)\0"
    "on_roll_ki_sliderMoved(int)\0"
    "on_roll_kd_sliderMoved(int)\0"
    "on_roll_setpoint_sliderMoved(int)\0"
    "on_yaw_kp_sliderMoved(int)\0"
    "on_yaw_ki_sliderMoved(int)\0"
    "on_yaw_kd_sliderMoved(int)\0"
    "on_yaw_setpoint_sliderMoved(int)\0"
    "on_StartToSaveData_clicked()\0"
    "on_StopToWrote_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_PushButton1_clicked(); break;
        case 1: _t->on_changeBaseSpeed_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pitch_kp_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pitch_ki_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pitch_kd_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pitch_setpoint_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_roll_kp_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_roll_ki_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_roll_kd_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_roll_setpoint_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_yaw_kp_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_yaw_ki_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_yaw_kd_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_yaw_setpoint_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_StartToSaveData_clicked(); break;
        case 17: _t->on_StopToWrote_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
