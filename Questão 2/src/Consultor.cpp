#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"
using namespace std;

Consultor::Consultor(Funcionario pessoa, float p)
{
    this->pessoa = pessoa;
    cout << getSalario(p) << endl;
}

double Consultor::getSalario(float p){
    return pessoa.getSalario()*(p/100.0);
}
