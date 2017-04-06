#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include <string>
using namespace std;

class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo(string nome, double lado, double altura);
        double calcularArea(double l, double h);
        void setLado(double l);
        void setAltura(double h);
        double getLado();
        double getAltura();
    private:
        double lado, altura;
};


#endif // TRIANGULO_H
