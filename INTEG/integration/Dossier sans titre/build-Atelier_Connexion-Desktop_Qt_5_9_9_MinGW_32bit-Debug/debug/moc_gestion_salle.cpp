/****************************************************************************
** Meta object code from reading C++ file 'gestion_salle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Atelier_Connexion/gestion_salle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion_salle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestion_salle_t {
    QByteArrayData data[13];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestion_salle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestion_salle_t qt_meta_stringdata_gestion_salle = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gestion_salle"
QT_MOC_LITERAL(1, 14, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 61, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(5, 85, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(6, 106, 5), // "index"
QT_MOC_LITERAL(7, 112, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(8, 136, 16), // "on_SSS_2_clicked"
QT_MOC_LITERAL(9, 153, 30), // "on_pushButton_Afficher_clicked"
QT_MOC_LITERAL(10, 184, 27), // "on_pushButton_Excel_clicked"
QT_MOC_LITERAL(11, 212, 33), // "on_lineEdit_recherche_textCha..."
QT_MOC_LITERAL(12, 246, 25) // "on_comboBox_tri_activated"

    },
    "gestion_salle\0on_pushButton_clicked\0"
    "\0on_pushButton_2_clicked\0"
    "on_pushButton_4_clicked\0on_tableView_clicked\0"
    "index\0on_pushButton_6_clicked\0"
    "on_SSS_2_clicked\0on_pushButton_Afficher_clicked\0"
    "on_pushButton_Excel_clicked\0"
    "on_lineEdit_recherche_textChanged\0"
    "on_comboBox_tri_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestion_salle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestion_salle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestion_salle *_t = static_cast<gestion_salle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_6_clicked(); break;
        case 5: _t->on_SSS_2_clicked(); break;
        case 6: _t->on_pushButton_Afficher_clicked(); break;
        case 7: _t->on_pushButton_Excel_clicked(); break;
        case 8: _t->on_lineEdit_recherche_textChanged(); break;
        case 9: _t->on_comboBox_tri_activated(); break;
        default: ;
        }
    }
}

const QMetaObject gestion_salle::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gestion_salle.data,
      qt_meta_data_gestion_salle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gestion_salle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_salle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestion_salle.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gestion_salle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
