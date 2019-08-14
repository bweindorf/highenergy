/****************************************************************************
** Meta object code from reading C++ file 'TQtClientGuard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../graf2d/qt/inc/TQtClientGuard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TQtClientGuard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TQtClientGuard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TQtClientGuard[] = {
    "TQtClientGuard\0\0Disconnect()\0"
};

void TQtClientGuard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TQtClientGuard *_t = static_cast<TQtClientGuard *>(_o);
        switch (_id) {
        case 0: _t->Disconnect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TQtClientGuard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TQtClientGuard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TQtClientGuard,
      qt_meta_data_TQtClientGuard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TQtClientGuard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TQtClientGuard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TQtClientGuard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TQtClientGuard))
        return static_cast<void*>(const_cast< TQtClientGuard*>(this));
    return QObject::qt_metacast(_clname);
}

int TQtClientGuard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_TQtPixmapGuard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TQtPixmapGuard[] = {
    "TQtPixmapGuard\0\0Disconnect()\0"
};

void TQtPixmapGuard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TQtPixmapGuard *_t = static_cast<TQtPixmapGuard *>(_o);
        switch (_id) {
        case 0: _t->Disconnect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TQtPixmapGuard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TQtPixmapGuard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TQtPixmapGuard,
      qt_meta_data_TQtPixmapGuard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TQtPixmapGuard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TQtPixmapGuard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TQtPixmapGuard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TQtPixmapGuard))
        return static_cast<void*>(const_cast< TQtPixmapGuard*>(this));
    return QObject::qt_metacast(_clname);
}

int TQtPixmapGuard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
