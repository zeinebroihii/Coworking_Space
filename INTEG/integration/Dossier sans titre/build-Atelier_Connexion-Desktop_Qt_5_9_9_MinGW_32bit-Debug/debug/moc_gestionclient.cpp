/****************************************************************************
** Meta object code from reading C++ file 'gestionclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Atelier_Connexion/gestionclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestionclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestionclient_t {
    QByteArrayData data[18];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestionclient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestionclient_t qt_meta_stringdata_gestionclient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gestionclient"
QT_MOC_LITERAL(1, 14, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(4, 61, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(5, 84, 25), // "on_label_12_linkActivated"
QT_MOC_LITERAL(6, 110, 18), // "on_tri_nom_clicked"
QT_MOC_LITERAL(7, 129, 17), // "on_tri_id_clicked"
QT_MOC_LITERAL(8, 147, 21), // "on_tri_prenom_clicked"
QT_MOC_LITERAL(9, 169, 24), // "on_rechercher_pb_clicked"
QT_MOC_LITERAL(10, 194, 17), // "on_pdf_bo_clicked"
QT_MOC_LITERAL(11, 212, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(12, 234, 11), // "launch_chat"
QT_MOC_LITERAL(13, 246, 5), // "chat&"
QT_MOC_LITERAL(14, 252, 11), // "chat_window"
QT_MOC_LITERAL(15, 264, 31), // "on_pushButton_archiverd_clicked"
QT_MOC_LITERAL(16, 296, 36), // "on_pushButton_desarchiver_do_..."
QT_MOC_LITERAL(17, 333, 15) // "on_pb_s_clicked"

    },
    "gestionclient\0on_pb_ajouter_clicked\0"
    "\0on_pb_supprimer_clicked\0"
    "on_pb_modifier_clicked\0on_label_12_linkActivated\0"
    "on_tri_nom_clicked\0on_tri_id_clicked\0"
    "on_tri_prenom_clicked\0on_rechercher_pb_clicked\0"
    "on_pdf_bo_clicked\0on_sendButton_clicked\0"
    "launch_chat\0chat&\0chat_window\0"
    "on_pushButton_archiverd_clicked\0"
    "on_pushButton_desarchiver_do_clicked\0"
    "on_pb_s_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestionclient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestionclient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestionclient *_t = static_cast<gestionclient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_ajouter_clicked(); break;
        case 1: _t->on_pb_supprimer_clicked(); break;
        case 2: _t->on_pb_modifier_clicked(); break;
        case 3: _t->on_label_12_linkActivated(); break;
        case 4: _t->on_tri_nom_clicked(); break;
        case 5: _t->on_tri_id_clicked(); break;
        case 6: _t->on_tri_prenom_clicked(); break;
        case 7: _t->on_rechercher_pb_clicked(); break;
        case 8: _t->on_pdf_bo_clicked(); break;
        case 9: _t->on_sendButton_clicked(); break;
        case 10: { bool _r = _t->launch_chat((*reinterpret_cast< chat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->on_pushButton_archiverd_clicked(); break;
        case 12: _t->on_pushButton_desarchiver_do_clicked(); break;
        case 13: _t->on_pb_s_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject gestionclient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gestionclient.data,
      qt_meta_data_gestionclient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gestionclient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestionclient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestionclient.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gestionclient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
