#include "receitas.h"

QString Receitas::getNome() const
{
    return nome;
}

bool Receitas::setNome(const QString &value)
{
    if(value.size()>3){
        nome = value;
        return true;
    }else{
        return false;
    }
}


QString Receitas::getCategoria() const
{
    return categoria;
}

bool Receitas::setCategoria(const QString &value)
{
    if(value.size()>0){
        categoria = value;
        return true;
    }else{
        return false;
    }
}



QString Receitas::getDificuldade() const
{
    return dificuldade;
}

bool Receitas::setDificuldade(const QString &value)
{
    if(value.size()>0){
        dificuldade = value;
        return true;
    }else{
        return false;
    }
}



double Receitas::getEstrelas() const
{
    return estrelas;
}

bool Receitas::setEstrelas(double value)
{
    if((value>0)and(value<=5)){
        estrelas = value;
        return true;
    }else{
        return false;
    }
}



QString Receitas::classificacao()
{

    if(estrelas <= 1){
        return "Ruim";
    }else if((estrelas > 1)and(estrelas < 3)){
        return "Razoável";
    }else if((estrelas > 2)and(estrelas < 4)){
        return "Boa";
    }else if((estrelas > 3)and(estrelas < 5)){
        return "Ótima";
    }else{
        return "Excelente";
    }
}

//codigo novo

QString Receitas::getLink() const
{
    return link;
}

bool Receitas::setLink(const QString &value)
{
    if(value.size()>3){
        link = value;
        return true;
    }else{
        return false;
    }
}



//codigo novo

Receitas::Receitas()
{

}
