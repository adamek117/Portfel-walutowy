/****************************************************************************
** Meta object code from reading C++ file 'dodaj.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Portfel_1Okno/dodaj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dodaj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dodaj_t {
    const uint offsetsAndSize[12];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_dodaj_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_dodaj_t qt_meta_stringdata_dodaj = {
    {
QT_MOC_LITERAL(0, 5), // "dodaj"
QT_MOC_LITERAL(6, 8), // "sendData"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 4), // "data"
QT_MOC_LITERAL(21, 6), // "waluta"
QT_MOC_LITERAL(28, 25) // "on_przycisk_dodaj_clicked"

    },
    "dodaj\0sendData\0\0data\0waluta\0"
    "on_przycisk_dodaj_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dodaj[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   31,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void dodaj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dodaj *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_przycisk_dodaj_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dodaj::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dodaj::sendData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject dodaj::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dodaj.offsetsAndSize,
    qt_meta_data_dodaj,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_dodaj_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *dodaj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dodaj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dodaj.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dodaj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void dodaj::sendData(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
