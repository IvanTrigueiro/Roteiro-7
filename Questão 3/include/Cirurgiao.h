#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao : public Medico
{
    public:
        Cirurgiao(string nome, double peso, double altura, string especializacao,  int dia, int mes);
        void setEspec(string especializacao);
        string getEspec();
        void dataCirurgia(int dia, int mes);
    private:
        string especializacao;
        int dia, mes;
        Medico medico;
};

#endif // CIRURGIAO_H
