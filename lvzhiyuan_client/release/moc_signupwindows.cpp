/****************************************************************************
** Meta object code from reading C++ file 'signupwindows.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../signupwindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signupwindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_signUpWindows_t {
    const uint offsetsAndSize[24];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_signUpWindows_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_signUpWindows_t qt_meta_stringdata_signUpWindows = {
    {
QT_MOC_LITERAL(0, 13), // "signUpWindows"
QT_MOC_LITERAL(14, 9), // "showlogin"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 8), // "send_sql"
QT_MOC_LITERAL(34, 2), // "id"
QT_MOC_LITERAL(37, 3), // "sql"
QT_MOC_LITERAL(41, 11), // "receivesign"
QT_MOC_LITERAL(53, 22), // "on_backToLogin_clicked"
QT_MOC_LITERAL(76, 25), // "on_registerButton_clicked"
QT_MOC_LITERAL(102, 21), // "responseSignDetection"
QT_MOC_LITERAL(124, 12), // "isSuccessful"
QT_MOC_LITERAL(137, 14) // "responseSignUp"

    },
    "signUpWindows\0showlogin\0\0send_sql\0id\0"
    "sql\0receivesign\0on_backToLogin_clicked\0"
    "on_registerButton_clicked\0"
    "responseSignDetection\0isSuccessful\0"
    "responseSignUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_signUpWindows[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    2,   57,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   62,    2, 0x08,    5 /* Private */,
       7,    0,   63,    2, 0x08,    6 /* Private */,
       8,    0,   64,    2, 0x08,    7 /* Private */,
       9,    1,   65,    2, 0x08,    8 /* Private */,
      11,    1,   68,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonArray,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void signUpWindows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<signUpWindows *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showlogin(); break;
        case 1: _t->send_sql((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2]))); break;
        case 2: _t->receivesign(); break;
        case 3: _t->on_backToLogin_clicked(); break;
        case 4: _t->on_registerButton_clicked(); break;
        case 5: _t->responseSignDetection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->responseSignUp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (signUpWindows::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&signUpWindows::showlogin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (signUpWindows::*)(QString , QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&signUpWindows::send_sql)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject signUpWindows::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_signUpWindows.offsetsAndSize,
    qt_meta_data_signUpWindows,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_signUpWindows_t
, QtPrivate::TypeAndForceComplete<signUpWindows, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *signUpWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signUpWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_signUpWindows.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int signUpWindows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void signUpWindows::showlogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void signUpWindows::send_sql(QString _t1, QJsonArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
