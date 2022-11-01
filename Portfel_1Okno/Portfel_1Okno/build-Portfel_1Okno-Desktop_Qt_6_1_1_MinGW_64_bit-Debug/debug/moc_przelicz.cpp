/****************************************************************************
** Meta object code from reading C++ file 'przelicz.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../przelicz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'przelicz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Przelicz_t {
    const uint offsetsAndSize[22];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Przelicz_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Przelicz_t qt_meta_stringdata_Przelicz = {
    {
QT_MOC_LITERAL(0, 8), // "Przelicz"
QT_MOC_LITERAL(9, 9), // "sendData2"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 5), // "amout"
QT_MOC_LITERAL(26, 8), // "currency"
QT_MOC_LITERAL(35, 6), // "amout2"
QT_MOC_LITERAL(42, 9), // "currency2"
QT_MOC_LITERAL(52, 26), // "on_przycisk_wymien_clicked"
QT_MOC_LITERAL(79, 6), // "wymien"
QT_MOC_LITERAL(86, 1), // "a"
QT_MOC_LITERAL(88, 25) // "on_przycisk_dodaj_clicked"

    },
    "Przelicz\0sendData2\0\0amout\0currency\0"
    "amout2\0currency2\0on_przycisk_wymien_clicked\0"
    "wymien\0a\0on_przycisk_dodaj_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Przelicz[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   38,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   47,    2, 0x08,    5 /* Private */,
       8,    1,   48,    2, 0x08,    6 /* Private */,
      10,    0,   51,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Double, QMetaType::Double,    9,
    QMetaType::Void,

       0        // eod
};

void Przelicz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Przelicz *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendData2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->on_przycisk_wymien_clicked(); break;
        case 2: { double _r = _t->wymien((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_przycisk_dodaj_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Przelicz::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Przelicz::sendData2)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Przelicz::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Przelicz.offsetsAndSize,
    qt_meta_data_Przelicz,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Przelicz_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Przelicz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Przelicz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Przelicz.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Przelicz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Przelicz::sendData2(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
