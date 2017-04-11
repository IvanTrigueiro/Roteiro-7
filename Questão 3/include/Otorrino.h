#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

class Otorrino : public Medico
{
    public:
        Otorrino(string nome, double peso, double altura, string especializacao);
        void setEspec(string especializacao);
        string getEspec();
        void RemocaoCera(string nomepac);
    protected:

    private:
        string especializacao, nomepac;
};

#endif // OTORRINO_H
