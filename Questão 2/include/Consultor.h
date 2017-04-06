#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor(Funcionario pessoa, float percentual);
        double getSalario(float percentual);
    private:
        float percentual;
        Funcionario pessoa;
};

#endif // CONSULTOR_H
