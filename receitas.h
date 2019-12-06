#ifndef RECEITAS_H
#define RECEITAS_H

#include <QString>


class Receitas
{
private:

    QString nome;
    QString categoria;
    QString dificuldade;
    double estrelas;

    //codigo novo

    QString link;



public:
    Receitas();

    QString getNome() const;
    bool setNome(const QString &value);

    QString getCategoria() const;
    bool setCategoria(const QString &value);

    QString getDificuldade() const;
    bool setDificuldade(const QString &value);

    double getEstrelas() const;
    bool setEstrelas(double value);

    QString classificacao();

    //codigo novo

    QString getLink() const;
    bool setLink(const QString &value);
};

#endif // RECEITAS_H
