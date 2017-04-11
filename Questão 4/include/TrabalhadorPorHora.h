#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(string nome, double horas, double salario);
        virtual void CalcularPagamento(double horas, double salario);

    protected:

    private:
};

#endif // TRABALHADORPORHORA_H
