#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include <string>
#define PI 3.14
using namespace std;

class Circulo
{
    public:
        Circulo(string nome, double raio);
        double calcularArea(double raio);
        void setRaio(double raio);
        double getRaio();
    private:
        double raio;
};

#endif // CIRCULO_H
