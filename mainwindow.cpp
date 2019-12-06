#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabela_dados->setColumnWidth(0,160);
    ui->tabela_dados->setColumnWidth(1,135);
    ui->tabela_dados->setColumnWidth(2,120);
    ui->tabela_dados->setColumnWidth(3,70);
    ui->tabela_dados->setColumnWidth(4,100);
    ui->tabela_dados->setColumnWidth(5,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BT1_cadastro_clicked()
{

       QString msg;
       double stars=0;


       if(ui->RB4->isChecked()){
           stars=1;
       }else if(ui->RB5->isChecked()){
           stars=2;
       }else if(ui->RB6->isChecked()){
           stars=3;
       }else if(ui->RB7->isChecked()){
           stars=4;
       }else if(ui->RB8->isChecked()){
           stars=5;
       }

       QString nome = ui->input_nome_receita->text();
       QString categoria = ui->input_categoria->currentText();
       QString dificuldade =ui->input_dificuldade->currentText();
       QString link=ui->input_link->text();

       if((receitas.setNome(nome)) and (receitas.setCategoria(categoria)) and (receitas.setDificuldade(dificuldade)) and (receitas.setLink(link)) and (receitas.setEstrelas(stars))){


           int quantidade_linhas = ui->tabela_dados->rowCount();

           if(livro.evitarRepitir(receitas) == 1){

           QMessageBox::critical(this,"Atenção: ","Essa receita já foi cadastrada");

           }else{

              ui->tabela_dados->insertRow(quantidade_linhas);

              inserirNaTabela(receitas,quantidade_linhas);

              livro.inserirReceita(receitas);
              atualizarDados();
           }
       }else{
           QMessageBox::critical(this,"Atenção: ","Todos os campos devem ser preenchidos corretamente");
       }

       ui->input_nome_receita->clear();
       ui->input_link->clear();
       ui->input_categoria->setCurrentIndex(0);
       ui->input_dificuldade->setCurrentIndex(0);


}

void MainWindow::atualizarDados()
{
    ui->numero_receitas->setText(QString::number(livro.size()));
    ui->media_estrelas_geral->setText(QString::number(livro.getMediaDasReceitas(),'f',1));
}

void MainWindow::inserirNaTabela(Receitas R, int linha)
{
        ui->tabela_dados->setItem(linha,0, new QTableWidgetItem(R.getNome()));
        ui->tabela_dados->setItem(linha,1, new QTableWidgetItem(R.getCategoria()));
        ui->tabela_dados->setItem(linha,2, new QTableWidgetItem(R.getDificuldade()));
        ui->tabela_dados->setItem(linha,3, new QTableWidgetItem(QString::number(R.getEstrelas())));
        ui->tabela_dados->setItem(linha,5, new QTableWidgetItem(R.classificacao()));
        //codigo novo//
        ui->tabela_dados->setItem(linha,4,new QTableWidgetItem(R.getLink()));
}

void MainWindow::on_BT_ordenarPorNome_clicked()
{
    livro.OrdenarPorNome();
    ui->tabela_dados->clearContents();
    for(int i=0; i<livro.size();i++){
        inserirNaTabela(livro[i],i);
    }
}

void MainWindow::on_BT_organizarPelasEstrelas_clicked()
{
    livro.OrdenarPorEstrelas();
    ui->tabela_dados->clearContents();
    for(int i=0; i<livro.size();i++){
        inserirNaTabela(livro[i],i);
    }
}

void MainWindow::on_OrganizarPelaDificuldade_clicked()
{
    livro.OrdenarPorDificuldade();
    ui->tabela_dados->clearContents();
    for(int i=0; i<livro.size();i++){
        inserirNaTabela(livro[i],i);
    }
}




//codigo novo;

void MainWindow::on_actionSalvar_triggered()
{
    QString filename;
    filename = QFileDialog::getSaveFileName(this,"Salvar Arquivo","","*.csv");
    livro.salvarDados(filename);
}

void MainWindow::on_actionCarregar_triggered()
{
    QString filename;
      filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.csv");
      livro.carregarDados(filename);

      atualizarTabela();
      atualizarDados();

      ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_actionExcluir_triggered()
{
    QMessageBox::StandardButton resp = QMessageBox::question(this, "Excluir Receitas", "Você deseja excluir um receita?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Excluir receita", "Qual receita será excluida?", QLineEdit::Normal,"",&ok);
            qDebug() << txt;
            if(ok and !txt.isEmpty()){
                if(livro.apagarReceita(txt) != 0){
                    ui->tabela_dados->clearContents();
                    for(int j=0; j < livro.size(); j++){
                        ui->tabela_dados->insertRow(ui->tabela_dados->rowCount());
                        inserirNaTabela(livro[j],j);
                    }
                    QMessageBox::information(this,"Sucesso","A receita foi excluída");
                }else{
                    QMessageBox::warning(this,"Atenção: ","O receita não existe.");
                }
            }else{
                QMessageBox::warning(this,"Atenção","A caixa de texto está vazia ou preenchida incorretamente");
            }
        }
        atualizarTabela();
        atualizarDados();
}



void MainWindow::on_ResetarDados_clicked()
{
    int qtdeLinhas = ui->tabela_dados->rowCount();
        for(int i = 0; i < qtdeLinhas ; i++)
            ui->tabela_dados->removeRow(0);

     livro.resetarReceitas();
     ui->tabela_dados->clearContents();
     atualizarDados();
     ui->media_estrelas_geral->clear();

}

void MainWindow::on_AtualizarDados_clicked()
{

   ui->tabela_dados->clearContents();
   for(int i=0; i<livro.size();i++){
       inserirNaTabela(livro[i],i);
   }
   atualizarDados();

}

void MainWindow::on_tabela_dados_cellClicked(int row, int column)
{
if(column==4)
   QDesktopServices::openUrl(QUrl(livro[row].getLink()));


}

void MainWindow::atualizarTabela()
{
    ui->tabela_dados->setRowCount(0);
    for(int i=0;i<livro.size();i++){
        ui->tabela_dados->insertRow(i);
        inserirNaTabela(livro[i],i);
    }
}

void MainWindow::on_tabela_dados_cellDoubleClicked(int row, int column)
{
   column=0;
   EditeDialog edite;
   edite.setreceita(livro.obterReceita(row),livro);
   edite.setModal(true);
   edite.exec();

   if(edite.ope == 1){
       livro.setReceita(edite.getReceita(),row);
       atualizarTabela();

   }

}
