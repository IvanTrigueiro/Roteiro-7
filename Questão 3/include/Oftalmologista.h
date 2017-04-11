#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

class Oftalmologista : public Medico
{
    public:
        Oftalmologista(string nome, double peso, double altura, string especializacao, int dia, int mes);
        void setEspec(string especializacao);
        string getEspec();
        void dataConsulta(int dia, int mes);
    protected:

    private:
        string especializacao;
        int dia, mes;
        Medico medico;
};

#endif // OFTALMOLOGISTA_H
