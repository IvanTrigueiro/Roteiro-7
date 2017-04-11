#ifndef MEDICO_H
#define MEDICO_H
#include <string>
using namespace std;

class Medico
{
    public:
        Medico();
        Medico(string nome, double peso, double altura);

        void setPeso(double peso);
        void setAltura(double altura);
        void setNome(string nome);

        double getPeso();
        double getAltura();
        string getNome();

    protected:

    private:
        double peso, altura;
        string nome;
};

#endif // MEDICO_H
