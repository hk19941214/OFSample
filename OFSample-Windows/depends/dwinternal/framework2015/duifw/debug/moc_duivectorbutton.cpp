/****************************************************************************
** Meta object code from reading C++ file 'duivectorbutton.h'
**
** Created: Fri Aug 2 15:22:13 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/duivectorbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'duivectorbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DuiVectorButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      11,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      33,   27,   16,   16, 0x05,
      50,   27,   16,   16, 0x05,

 // properties: name, type, flags
      81,   68, 0x0009500b,
      96,   89, 0x43095103,
     105,   89, 0x43095103,
     121,   89, 0x43095103,
     137,   89, 0x43095103,
     158,   89, 0x43095103,
     179,   89, 0x43095103,
     202,   89, 0x43095103,
     225,   89, 0x43095103,
     249,   89, 0x43095103,
     278,  273, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_DuiVectorButton[] = {
    "DuiVectorButton\0\0clicked()\0point\0"
    "pressed(QPointF)\0released(QPointF)\0"
    "QPainterPath\0outline\0QColor\0penColor\0"
    "backgroundColor\0foregroundColor\0"
    "hoverBackgroundColor\0hoverForegroundColor\0"
    "pressedBackgroundColor\0pressedForegroundColor\0"
    "disabledBackgroundColor\0disabledForegroundColor\0"
    "bool\0enabled\0"
};

const QMetaObject DuiVectorButton::staticMetaObject = {
    { &DuiWidget::staticMetaObject, qt_meta_stringdata_DuiVectorButton,
      qt_meta_data_DuiVectorButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DuiVectorButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DuiVectorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DuiVectorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DuiVectorButton))
        return static_cast<void*>(const_cast< DuiVectorButton*>(this));
    return DuiWidget::qt_metacast(_clname);
}

int DuiVectorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DuiWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clicked(); break;
        case 1: pressed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 2: released((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPainterPath*>(_v) = painterPath(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = penColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = foregroundColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = hoverBackgroundColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = hoverForegroundColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = pressedBackgroundColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = pressedForegroundColor(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = disabledBackgroundColor(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = disabledForegroundColor(); break;
        case 10: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPainterPath(*reinterpret_cast< QPainterPath*>(_v)); break;
        case 1: setPenColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setHoverBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setHoverForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: setPressedBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: setPressedForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: setDisabledBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: setDisabledForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 10: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DuiVectorButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DuiVectorButton::pressed(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DuiVectorButton::released(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE