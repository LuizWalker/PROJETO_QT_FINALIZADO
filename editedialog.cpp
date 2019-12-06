#include "editedialog.h"
#include "ui_editedialog.h"

EditeDialog::EditeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditeDialog)
{
    ui->setupUi(this);
    ope=0;
}

EditeDialog::~EditeDialog()
{
    delete ui;
}

void EditeDialog::setreceita(Receitas p, Livro g)
{
    livro = g;
    receitas = p;

    ui->input_nome_receita->setText(receitas.getNome());
    ui->input_categoria->setCurrentText(receitas.getCategoria());
    ui->input_dificuldade->setCurrentText(receitas.getDificuldade());
    ui->input_link->setText(receitas.getLink());
    ui->inputEstrelas->setText(QString::number(receitas.getEstrelas()));
}

Receitas EditeDialog::getReceita() const
{
    return receitas;
}

void EditeDialog::setReceita(const Receitas &value)
{
    receitas = value;
}

void EditeDialog::on_cadastrar_clicked()
{
    QString nomeant = receitas.getNome();

    QString nome = ui->input_nome_receita->text();

    QString categoria = ui->input_categoria->currentText();

    QString dificuldade = ui->input_dificuldade->currentText();

    QString link = ui->input_link->text();

    QString estrelas = ui->inputEstrelas->text();

    if((receitas.setNome(nome)) and (receitas.setCategoria(categoria)) and (receitas.setDificuldade(dificuldade)) and (receitas.setLink(link)) and (receitas.setEstrelas(estrelas.toDouble()))){

        if(nomeant == receitas.getNome()){

            ope=1;
            close();
        }else if(!(livro.evitarRepitir(receitas))){

            ope = 1;
            close();
        }
        else QMessageBox::critical(this,"Atenção","Receita cadastrada");

    }else{
        QMessageBox::critical(this,"Atenção","Os campos devem ser preenchidos corretamente");
    }
}

void EditeDialog::on_cancelar_clicked()
{
    close();
}
