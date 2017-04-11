#include "Medico.h"

Medico::Medico(){};


void Medico::setPeso(double peso){
    this->peso = peso;
}
void Medico::setAltura(double altura){
    this->altura = altura;
}
void Medico::setNome(string nome){
    this->nome = nome;
}
double Medico::getPeso(){return peso;}
double Medico::getAltura(){return altura;}
string Medico::getNome(){return nome;}
