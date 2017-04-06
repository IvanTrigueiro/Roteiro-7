#include <iostream>
#include "Quadrado.h"

using namespace std;

Quadrado::Quadrado(string n, double l, double h)//: FiguraGeometrica(n)
{
    if(n == "Quadrado"){
        cout << n << ": ";
        cout << calcularArea(l, h) <<endl;
    }
}

double Quadrado::calcularArea(double l, double h){
    return l*h;
}

void Quadrado::setLado(double lado){
    this->lado = lado;
}
void Quadrado::setAltura(double altura){
    this->altura = altura;
}
double Quadrado::getLado(){return lado;}
double Quadrado::getAltura(){return altura;}
