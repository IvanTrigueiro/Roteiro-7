#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado(string nome, double horas, double salario);

        virtual void CalcularPagamento(double horas, double salario);

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
