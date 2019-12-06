#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QInputDialog>
#include <QTextStream>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>
#include <QDebug>
#include <QString>

#include "receitas.h"
#include "livro.h"
#include "editedialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_BT1_cadastro_clicked();

    void on_BT_ordenarPorNome_clicked();

    void on_BT_organizarPelasEstrelas_clicked();

    void on_OrganizarPelaDificuldade_clicked();

    void on_tabela_dados_cellDoubleClicked(int row, int column);

    void inserirNaTabela(Receitas R, int linha);

//codigo novo

    void on_actionSalvar_triggered();

    void on_actionCarregar_triggered();

    void on_actionExcluir_triggered();

    void on_ResetarDados_clicked();

    void on_AtualizarDados_clicked();

   void on_tabela_dados_cellClicked(int row, int column);

   void atualizarTabela();

private:
    Ui::MainWindow *ui;
    Livro livro;
    Receitas receitas;

    void atualizarDados();

};
#endif // MAINWINDOW_H
