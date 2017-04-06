#include "FiguraGeometrica.h"
#include <string>

using namespace std;

FiguraGeometrica::FiguraGeometrica(){};

FiguraGeometrica::FiguraGeometrica(string nome)
{
    setNome(nome);
}

double FiguraGeometrica::calcularArea(){return 0;}

string FiguraGeometrica::getNome(){
    return nome;
    }

void FiguraGeometrica::setNome(string nome){
    this->nome = nome;
    }
