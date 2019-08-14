/****************************************************************************
** Meta object code from reading C++ file 'TQtEmitter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../graf2d/qt/inc/TQtEmitter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TQtEmitter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TQtEmitter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TQtEmitter[] = {
    "TQtEmitter\0\0p\0padPainted(QPixmap*)\0"
};

void TQtEmitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TQtEmitter *_t = static_cast<TQtEmitter *>(_o);
        switch (_id) {
        case 0: _t->padPainted((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TQtEmitter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TQtEmitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TQtEmitter,
      qt_meta_data_TQtEmitter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TQtEmitter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TQtEmitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TQtEmitter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TQtEmitter))
        return static_cast<void*>(const_cast< TQtEmitter*>(this));
    return QObject::qt_metacast(_clname);
}

int TQtEmitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TQtEmitter::padPainted(QPixmap * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
