#include "Funcionario.h"

Funcionario::Funcionario(){}
Funcionario::Funcionario(int m, string n, double s){
    setMatricula(m);
    setNome(n);
    setSalario(s);
}
void Funcionario::setSalario(double salario){
    this->salario = salario;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

double Funcionario::getSalario(){return salario;}

string Funcionario::getNome(){return nome;}

int Funcionario::getMatricula(){return matricula;}
