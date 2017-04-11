#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
}

void Trabalhador::setNome(string nome){
    this->nome = nome;
}
void Trabalhador::setSalario(double salario){
    this-> salario = salario;
}
void Trabalhador::setHoras(double horas){
    this-> horas = horas;
}

string Trabalhador::getNome(){return nome;}
double Trabalhador::getSalario(){return salario;}
double Trabalhador::getHoras(){return horas;}
