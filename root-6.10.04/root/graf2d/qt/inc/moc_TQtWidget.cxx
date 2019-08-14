/****************************************************************************
** Meta object code from reading C++ file 'TQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../graf2d/qt/inc/TQtWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TQtWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      30,   27,   10,   10, 0x05,
      59,   42,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     102,   10,   10,   10, 0x0a,
     120,  107,   10,   10, 0x0a,
     128,   10,   10,   10, 0x0a,
     141,   10,   10,   10, 0x0a,
     165,  156,  151,   10, 0x0a,
     179,  156,  151,   10, 0x0a,
     221,  197,  151,   10, 0x0a,
     267,  251,  151,   10, 0x2a,
     293,  197,  151,   10, 0x0a,
     327,  251,  151,   10, 0x2a,
     357,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TQtWidget[] = {
    "TQtWidget\0\0CanvasPainted()\0ok\0Saved(bool)\0"
    "selected,event,c\0"
    "RootEventProcessed(TObject*,uint,TCanvas*)\0"
    "cd()\0subpadnumber\0cd(int)\0Disconnect()\0"
    "Refresh()\0bool\0fileName\0Save(QString)\0"
    "Save(const char*)\0fileName,format,quality\0"
    "Save(QString,const char*,int)\0"
    "fileName,format\0Save(QString,const char*)\0"
    "Save(const char*,const char*,int)\0"
    "Save(const char*,const char*)\0RefreshCB()\0"
};

void TQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TQtWidget *_t = static_cast<TQtWidget *>(_o);
        switch (_id) {
        case 0: _t->CanvasPainted(); break;
        case 1: _t->Saved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->RootEventProcessed((*reinterpret_cast< TObject*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< TCanvas*(*)>(_a[3]))); break;
        case 3: _t->cd(); break;
        case 4: _t->cd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Disconnect(); break;
        case 6: _t->Refresh(); break;
        case 7: { bool _r = _t->Save((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->Save((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->Save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->Save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->Save((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->Save((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->RefreshCB(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TQtWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TQtWidget,
      qt_meta_data_TQtWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TQtWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TQtWidget))
        return static_cast<void*>(const_cast< TQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TQtWidget::CanvasPainted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TQtWidget::Saved(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TQtWidget::RootEventProcessed(TObject * _t1, unsigned int _t2, TCanvas * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
