/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
    const uint offsetsAndSize[32];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 5), // "login"
QT_MOC_LITERAL(6, 8), // "showmain"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 8), // "showsign"
QT_MOC_LITERAL(25, 13), // "send_username"
QT_MOC_LITERAL(39, 1), // "u"
QT_MOC_LITERAL(41, 8), // "send_sql"
QT_MOC_LITERAL(50, 2), // "id"
QT_MOC_LITERAL(53, 3), // "sql"
QT_MOC_LITERAL(57, 16), // "on_close_clicked"
QT_MOC_LITERAL(74, 15), // "on_mini_clicked"
QT_MOC_LITERAL(90, 17), // "on_signUp_clicked"
QT_MOC_LITERAL(108, 12), // "receivelogin"
QT_MOC_LITERAL(121, 17), // "on_signIn_clicked"
QT_MOC_LITERAL(139, 13), // "responseLogin"
QT_MOC_LITERAL(153, 12) // "isSuccessful"

    },
    "login\0showmain\0\0showsign\0send_username\0"
    "u\0send_sql\0id\0sql\0on_close_clicked\0"
    "on_mini_clicked\0on_signUp_clicked\0"
    "receivelogin\0on_signIn_clicked\0"
    "responseLogin\0isSuccessful"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    1,   76,    2, 0x06,    3 /* Public */,
       6,    2,   79,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   84,    2, 0x08,    8 /* Private */,
      10,    0,   85,    2, 0x08,    9 /* Private */,
      11,    0,   86,    2, 0x08,   10 /* Private */,
      12,    0,   87,    2, 0x08,   11 /* Private */,
      13,    0,   88,    2, 0x08,   12 /* Private */,
      14,    1,   89,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonArray,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showmain(); break;
        case 1: _t->showsign(); break;
        case 2: _t->send_username((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->send_sql((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2]))); break;
        case 4: _t->on_close_clicked(); break;
        case 5: _t->on_mini_clicked(); break;
        case 6: _t->on_signUp_clicked(); break;
        case 7: _t->receivelogin(); break;
        case 8: _t->on_signIn_clicked(); break;
        case 9: _t->responseLogin((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::showmain)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::showsign)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (login::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::send_username)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (login::*)(QString , QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::send_sql)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject login::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_login.offsetsAndSize,
    qt_meta_data_login,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_login_t
, QtPrivate::TypeAndForceComplete<login, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void login::showmain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void login::showsign()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void login::send_username(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void login::send_sql(QString _t1, QJsonArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
