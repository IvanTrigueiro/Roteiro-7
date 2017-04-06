#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"
#include <string>

using namespace std;

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado(string nome, double lado, double altura);
        double calcularArea(double l, double h);
        void setLado(double l);
        void setAltura(double h);
        double getLado();
        double getAltura();
    private:
        double lado, altura;
};

#endif // QUADRADO_H
