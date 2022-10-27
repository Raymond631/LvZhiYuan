/****************************************************************************
** Meta object code from reading C++ file 'lzyserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../lzyserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lzyserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lzyServer_t {
    const uint offsetsAndSize[74];
    char stringdata0[448];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_lzyServer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_lzyServer_t qt_meta_stringdata_lzyServer = {
    {
QT_MOC_LITERAL(0, 9), // "lzyServer"
QT_MOC_LITERAL(10, 18), // "incomingConnection"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 7), // "qintptr"
QT_MOC_LITERAL(38, 16), // "socketDescriptor"
QT_MOC_LITERAL(55, 14), // "receiveMessage"
QT_MOC_LITERAL(70, 11), // "sendMessage"
QT_MOC_LITERAL(82, 2), // "id"
QT_MOC_LITERAL(85, 3), // "res"
QT_MOC_LITERAL(89, 7), // "toLogin"
QT_MOC_LITERAL(97, 3), // "sql"
QT_MOC_LITERAL(101, 17), // "toSignUpDetection"
QT_MOC_LITERAL(119, 8), // "toSignUp"
QT_MOC_LITERAL(128, 15), // "toRefreshNotice"
QT_MOC_LITERAL(144, 14), // "toRefreshFruit"
QT_MOC_LITERAL(159, 13), // "toSearchOrder"
QT_MOC_LITERAL(173, 17), // "toRefreshUserInfo"
QT_MOC_LITERAL(191, 12), // "toSaveNotice"
QT_MOC_LITERAL(204, 10), // "toDeletion"
QT_MOC_LITERAL(215, 7), // "listSQL"
QT_MOC_LITERAL(223, 8), // "toSearch"
QT_MOC_LITERAL(232, 11), // "toSaveFruit"
QT_MOC_LITERAL(244, 6), // "toSend"
QT_MOC_LITERAL(251, 16), // "toSavePersonInfo"
QT_MOC_LITERAL(268, 15), // "toMySearchOrder"
QT_MOC_LITERAL(284, 13), // "toRefreshCart"
QT_MOC_LITERAL(298, 12), // "toDeleteCart"
QT_MOC_LITERAL(311, 12), // "toSubmitCart"
QT_MOC_LITERAL(324, 18), // "toRefreshFavorites"
QT_MOC_LITERAL(343, 17), // "toDeleteFavorites"
QT_MOC_LITERAL(361, 10), // "toChatSend"
QT_MOC_LITERAL(372, 10), // "toLoadChat"
QT_MOC_LITERAL(383, 13), // "toRefreshChat"
QT_MOC_LITERAL(397, 16), // "toRefreshMessage"
QT_MOC_LITERAL(414, 9), // "toCollect"
QT_MOC_LITERAL(424, 11), // "toAddToCart"
QT_MOC_LITERAL(436, 11) // "toLoadImage"

    },
    "lzyServer\0incomingConnection\0\0qintptr\0"
    "socketDescriptor\0receiveMessage\0"
    "sendMessage\0id\0res\0toLogin\0sql\0"
    "toSignUpDetection\0toSignUp\0toRefreshNotice\0"
    "toRefreshFruit\0toSearchOrder\0"
    "toRefreshUserInfo\0toSaveNotice\0"
    "toDeletion\0listSQL\0toSearch\0toSaveFruit\0"
    "toSend\0toSavePersonInfo\0toMySearchOrder\0"
    "toRefreshCart\0toDeleteCart\0toSubmitCart\0"
    "toRefreshFavorites\0toDeleteFavorites\0"
    "toChatSend\0toLoadChat\0toRefreshChat\0"
    "toRefreshMessage\0toCollect\0toAddToCart\0"
    "toLoadImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lzyServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x08,    1 /* Private */,
       5,    0,  191,    2, 0x08,    3 /* Private */,
       6,    2,  192,    2, 0x08,    4 /* Private */,
       9,    1,  197,    2, 0x08,    7 /* Private */,
      11,    1,  200,    2, 0x08,    9 /* Private */,
      12,    1,  203,    2, 0x08,   11 /* Private */,
      13,    1,  206,    2, 0x08,   13 /* Private */,
      14,    1,  209,    2, 0x08,   15 /* Private */,
      15,    1,  212,    2, 0x08,   17 /* Private */,
      16,    1,  215,    2, 0x08,   19 /* Private */,
      17,    1,  218,    2, 0x08,   21 /* Private */,
      18,    1,  221,    2, 0x08,   23 /* Private */,
      20,    1,  224,    2, 0x08,   25 /* Private */,
      21,    1,  227,    2, 0x08,   27 /* Private */,
      22,    1,  230,    2, 0x08,   29 /* Private */,
      23,    1,  233,    2, 0x08,   31 /* Private */,
      24,    1,  236,    2, 0x08,   33 /* Private */,
      25,    1,  239,    2, 0x08,   35 /* Private */,
      26,    1,  242,    2, 0x08,   37 /* Private */,
      27,    1,  245,    2, 0x08,   39 /* Private */,
      28,    1,  248,    2, 0x08,   41 /* Private */,
      29,    1,  251,    2, 0x08,   43 /* Private */,
      30,    1,  254,    2, 0x08,   45 /* Private */,
      31,    1,  257,    2, 0x08,   47 /* Private */,
      32,    1,  260,    2, 0x08,   49 /* Private */,
      33,    1,  263,    2, 0x08,   51 /* Private */,
      34,    1,  266,    2, 0x08,   53 /* Private */,
      35,    1,  269,    2, 0x08,   55 /* Private */,
      36,    1,  272,    2, 0x08,   57 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QJsonArray,   19,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void lzyServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<lzyServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->incomingConnection((*reinterpret_cast< std::add_pointer_t<qintptr>>(_a[1]))); break;
        case 1: _t->receiveMessage(); break;
        case 2: _t->sendMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 3: _t->toLogin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->toSignUpDetection((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->toSignUp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->toRefreshNotice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->toRefreshFruit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->toSearchOrder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->toRefreshUserInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->toSaveNotice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->toDeletion((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 12: _t->toSearch((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->toSaveFruit((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 14: _t->toSend((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 15: _t->toSavePersonInfo((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 16: _t->toMySearchOrder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->toRefreshCart((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->toDeleteCart((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 19: _t->toSubmitCart((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 20: _t->toRefreshFavorites((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->toDeleteFavorites((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 22: _t->toChatSend((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->toLoadChat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->toRefreshChat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->toRefreshMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->toCollect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->toAddToCart((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->toLoadImage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject lzyServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_lzyServer.offsetsAndSize,
    qt_meta_data_lzyServer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_lzyServer_t
, QtPrivate::TypeAndForceComplete<lzyServer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qintptr, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *lzyServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lzyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lzyServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int lzyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
