#include <iostream>
#include "Cirurgiao.h"
#include "Medico.h"
using namespace std;

Cirurgiao::Cirurgiao(string nome, double peso, double altura, string especializacao,  int dia, int mes)
{
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    setEspec(especializacao);
    cout << getEspec() <<endl;
    dataCirurgia(dia, mes);
    cout << "Data da cirurgia: " << dia << "/" << mes <<endl;
}

void Cirurgiao::setEspec(string especializacao){
    this->especializacao = especializacao;
}
string Cirurgiao::getEspec(){return especializacao;}

void Cirurgiao::dataCirurgia(int dia, int mes){
    if(dia > 0 && dia < 30){
        this->dia = dia;
    } else {dia = 0;}
    if(mes > 0 && mes < 12){
        this->mes = mes;
    } else {mes = 0;}
}
