#include <iostream>
#include "Triangulo.h"
#include <string>
using namespace std;

Triangulo::Triangulo(string n, double l, double h)
{
    if(n == "Triangulo"){
        cout << n << ": ";
        cout << calcularArea(l, h)<<endl;
    }
}

double Triangulo::calcularArea(double l, double h){
    return (l*h)/2;
}

void Triangulo::setLado(double lado){
    this->lado = lado;
}
void Triangulo::setAltura(double altura){
    this->altura = altura;
}
double Triangulo::getLado(){return lado;}
double Triangulo::getAltura(){return altura;}
