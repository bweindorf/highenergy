/****************************************************************************
** Meta object code from reading C++ file 'TQtClientWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../graf2d/qt/inc/TQtClientWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TQtClientWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TQtClientWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      30,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TQtClientWidget[] = {
    "TQtClientWidget\0\0Disconnect()\0"
    "Accelerate()\0"
};

void TQtClientWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TQtClientWidget *_t = static_cast<TQtClientWidget *>(_o);
        switch (_id) {
        case 0: _t->Disconnect(); break;
        case 1: _t->Accelerate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TQtClientWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TQtClientWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TQtClientWidget,
      qt_meta_data_TQtClientWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TQtClientWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TQtClientWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TQtClientWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TQtClientWidget))
        return static_cast<void*>(const_cast< TQtClientWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int TQtClientWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
