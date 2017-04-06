#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <string>
using namespace std;

int main()
{
    FiguraGeometrica figura("Circulo");

    Quadrado quadrado("Quadrado", 10, 10);

    Triangulo triangulo("Triangulo", 5, 10);

    Circulo circulo("Circulo", 10);

    return 0;
}
