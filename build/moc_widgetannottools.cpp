/****************************************************************************
** Meta object code from reading C++ file 'widgetannottools.h'
**
** Created: Sat Jun 8 19:29:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../conf/widgetannottools.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetannottools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetAnnotTools[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   17,   17,   17, 0x08,
      44,   17,   17,   17, 0x08,
      54,   17,   17,   17, 0x08,
      65,   17,   17,   17, 0x08,
      78,   17,   17,   17, 0x08,
      91,   17,   17,   17, 0x08,

 // properties: name, type, flags
     118,  106, 0x0b595103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_WidgetAnnotTools[] = {
    "WidgetAnnotTools\0\0changed()\0updateButtons()\0"
    "slotAdd()\0slotEdit()\0slotRemove()\0"
    "slotMoveUp()\0slotMoveDown()\0QStringList\0"
    "tools\0"
};

void WidgetAnnotTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetAnnotTools *_t = static_cast<WidgetAnnotTools *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->updateButtons(); break;
        case 2: _t->slotAdd(); break;
        case 3: _t->slotEdit(); break;
        case 4: _t->slotRemove(); break;
        case 5: _t->slotMoveUp(); break;
        case 6: _t->slotMoveDown(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WidgetAnnotTools::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetAnnotTools::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetAnnotTools,
      qt_meta_data_WidgetAnnotTools, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetAnnotTools::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetAnnotTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetAnnotTools::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetAnnotTools))
        return static_cast<void*>(const_cast< WidgetAnnotTools*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetAnnotTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = tools(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTools(*reinterpret_cast< QStringList*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WidgetAnnotTools::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_EditAnnotToolDialog[] = {

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
      21,   20,   20,   20, 0x08,
      39,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditAnnotToolDialog[] = {
    "EditAnnotToolDialog\0\0slotTypeChanged()\0"
    "slotDataChanged()\0"
};

void EditAnnotToolDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditAnnotToolDialog *_t = static_cast<EditAnnotToolDialog *>(_o);
        switch (_id) {
        case 0: _t->slotTypeChanged(); break;
        case 1: _t->slotDataChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditAnnotToolDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditAnnotToolDialog::staticMetaObject = {
    { &KDialog::staticMetaObject, qt_meta_stringdata_EditAnnotToolDialog,
      qt_meta_data_EditAnnotToolDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditAnnotToolDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditAnnotToolDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditAnnotToolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditAnnotToolDialog))
        return static_cast<void*>(const_cast< EditAnnotToolDialog*>(this));
    return KDialog::qt_metacast(_clname);
}

int EditAnnotToolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDialog::qt_metacall(_c, _id, _a);
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
