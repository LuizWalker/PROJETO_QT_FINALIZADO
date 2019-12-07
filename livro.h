#ifndef LIVRO_H
#define LIVRO_H

#include <QVector>
#include <algorithm>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include "receitas.h"

class Livro
{
private:

    QVector<Receitas> livro;

public:

    Livro();



    void inserirReceita(Receitas R);
    bool evitarRepitir(Receitas R);

    void resetarReceitas();


    double getMediaDasReceitas();

    void OrdenarPorNome();
    void OrdenarPorEstrelas();
    void OrdenarPorDificuldade();

    void salvarDados(QString file);
    void carregarDados(QString file);

    int size();
    Receitas operator[](int indice);

    //codigo novo
    Receitas obterReceita(int r);
    void setReceita(Receitas a, int r);

    void apagarReceita(int r);



};

bool organizarnomes(Receitas a, Receitas b);
bool organizarestrelas(Receitas a, Receitas b);
bool organizardificuldade(Receitas a, Receitas b);

#endif // LIVRO_H
