#include "Otorrino.h"
#include "Medico.h"
#include <iostream>
using namespace std;

Otorrino::Otorrino(string nome, double peso, double altura, string especializacao)
{
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    setEspec(especializacao);
    cout << getEspec() <<endl;
}

void Otorrino::setEspec(string especializacao){
    this->especializacao = especializacao;
}
string Otorrino::getEspec(){return especializacao;}

void Otorrino::RemocaoCera(string nomepac){
    this->nomepac = nomepac;
    cout << "Procedimento de remocao de cera no paciente: " << nomepac <<endl;
}
