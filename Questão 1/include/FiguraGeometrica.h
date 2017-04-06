#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(string nome);
        double calcularArea();
        void setNome(string nome);
        string getNome();
    private:
        string nome;
};

#endif // FIGURAGEOMETRICA_H
