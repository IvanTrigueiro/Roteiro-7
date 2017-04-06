#include <iostream>
#include "Circulo.h"
#define PI 3.14
#include <string>
using namespace std;

Circulo::Circulo(string n, double r)
{
    if(n == "Circulo"){
        cout << n << ": ";
        cout << calcularArea(r) <<endl;
    }
}


double Circulo::calcularArea(double r){
    return PI*r*r;
}

void Circulo::setRaio(double raio){
    this->raio = raio;
}
double Circulo::getRaio(){return raio;}
