#ifndef EDITEDIALOG_H
#define EDITEDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "receitas.h"
#include "livro.h"

namespace Ui {
class EditeDialog;
}

class EditeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditeDialog(QWidget *parent = nullptr);
    ~EditeDialog();

    void setreceita(Receitas p, Livro g);
    int ope;
    Receitas getReceita() const;

    void setReceita(const Receitas &value);

private slots:

    void on_cadastrar_clicked();

    void on_cancelar_clicked();

private:
    Ui::EditeDialog *ui;
    Receitas receitas;
    Livro livro;
};

#endif // EDITEDIALOG_H
