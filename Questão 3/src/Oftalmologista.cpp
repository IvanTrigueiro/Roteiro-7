#include "Oftalmologista.h"
#include "Medico.h"
#include <iostream>
using namespace std;

Oftalmologista::Oftalmologista(string nome, double peso, double altura, string especializacao, int dia, int mes)
{
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    setEspec(especializacao);
    cout << getEspec() <<endl;
    dataConsulta(dia, mes);
    cout << "Data da consulta: " << dia << "/" << mes <<endl;
}

void Oftalmologista::setEspec(string especializacao){
    this->especializacao = especializacao;
}
string Oftalmologista::getEspec(){return especializacao;}

void Oftalmologista::dataConsulta(int dia, int mes){
    if(dia > 0 && dia < 30){
        this->dia = dia;
    } else {dia = 0;}
    if(mes < 12 && mes > 0){
        this->mes = mes;
    } else {mes = 0;}
}
