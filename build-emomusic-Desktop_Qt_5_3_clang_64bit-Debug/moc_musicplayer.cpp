/****************************************************************************
** Meta object code from reading C++ file 'musicplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/musicplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_musicPlayer_t {
    QByteArrayData data[9];
    char stringdata[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_musicPlayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_musicPlayer_t qt_meta_stringdata_musicPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 26),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 21),
QT_MOC_LITERAL(4, 62, 21),
QT_MOC_LITERAL(5, 84, 28),
QT_MOC_LITERAL(6, 113, 25),
QT_MOC_LITERAL(7, 139, 8),
QT_MOC_LITERAL(8, 148, 10)
    },
    "musicPlayer\0on_playPauseButton_clicked\0"
    "\0on_loadButton_clicked\0on_skipButton_clicked\0"
    "on_volumeSlider_valueChanged\0"
    "on_timeSlider_sliderMoved\0position\0"
    "updateTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_musicPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::LongLong,    2,

       0        // eod
};

void musicPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        musicPlayer *_t = static_cast<musicPlayer *>(_o);
        switch (_id) {
        case 0: _t->on_playPauseButton_clicked(); break;
        case 1: _t->on_loadButton_clicked(); break;
        case 2: _t->on_skipButton_clicked(); break;
        case 3: _t->on_volumeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_timeSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject musicPlayer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_musicPlayer.data,
      qt_meta_data_musicPlayer,  qt_static_metacall, 0, 0}
};


const QMetaObject *musicPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *musicPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_musicPlayer.stringdata))
        return static_cast<void*>(const_cast< musicPlayer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int musicPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE