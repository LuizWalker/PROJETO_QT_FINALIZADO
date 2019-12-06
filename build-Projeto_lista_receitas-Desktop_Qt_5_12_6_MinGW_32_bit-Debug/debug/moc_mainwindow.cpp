/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projeto_lista_receitas/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_BT1_cadastro_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 28), // "on_BT_ordenarPorNome_clicked"
QT_MOC_LITERAL(4, 65, 36), // "on_BT_organizarPelasEstrelas_..."
QT_MOC_LITERAL(5, 102, 35), // "on_OrganizarPelaDificuldade_c..."
QT_MOC_LITERAL(6, 138, 33), // "on_tabela_dados_cellDoubleCli..."
QT_MOC_LITERAL(7, 172, 3), // "row"
QT_MOC_LITERAL(8, 176, 6), // "column"
QT_MOC_LITERAL(9, 183, 15), // "inserirNaTabela"
QT_MOC_LITERAL(10, 199, 8), // "Receitas"
QT_MOC_LITERAL(11, 208, 1), // "R"
QT_MOC_LITERAL(12, 210, 5), // "linha"
QT_MOC_LITERAL(13, 216, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(14, 242, 27), // "on_actionCarregar_triggered"
QT_MOC_LITERAL(15, 270, 26), // "on_actionExcluir_triggered"
QT_MOC_LITERAL(16, 297, 23), // "on_ResetarDados_clicked"
QT_MOC_LITERAL(17, 321, 25), // "on_AtualizarDados_clicked"
QT_MOC_LITERAL(18, 347, 27), // "on_tabela_dados_cellClicked"
QT_MOC_LITERAL(19, 375, 15) // "atualizarTabela"

    },
    "MainWindow\0on_BT1_cadastro_clicked\0\0"
    "on_BT_ordenarPorNome_clicked\0"
    "on_BT_organizarPelasEstrelas_clicked\0"
    "on_OrganizarPelaDificuldade_clicked\0"
    "on_tabela_dados_cellDoubleClicked\0row\0"
    "column\0inserirNaTabela\0Receitas\0R\0"
    "linha\0on_actionSalvar_triggered\0"
    "on_actionCarregar_triggered\0"
    "on_actionExcluir_triggered\0"
    "on_ResetarDados_clicked\0"
    "on_AtualizarDados_clicked\0"
    "on_tabela_dados_cellClicked\0atualizarTabela"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    2,   83,    2, 0x08 /* Private */,
       9,    2,   88,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,
      18,    2,   98,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BT1_cadastro_clicked(); break;
        case 1: _t->on_BT_ordenarPorNome_clicked(); break;
        case 2: _t->on_BT_organizarPelasEstrelas_clicked(); break;
        case 3: _t->on_OrganizarPelaDificuldade_clicked(); break;
        case 4: _t->on_tabela_dados_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->inserirNaTabela((*reinterpret_cast< Receitas(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_actionSalvar_triggered(); break;
        case 7: _t->on_actionCarregar_triggered(); break;
        case 8: _t->on_actionExcluir_triggered(); break;
        case 9: _t->on_ResetarDados_clicked(); break;
        case 10: _t->on_AtualizarDados_clicked(); break;
        case 11: _t->on_tabela_dados_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->atualizarTabela(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
