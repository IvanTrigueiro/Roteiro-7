#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>
using namespace std;

class Trabalhador
{
    public:
        Trabalhador();

        virtual void CalcularPagamento(double horas, double salario) = 0;

        void setNome(string nome);
        void setSalario(double salario);
        void setHoras(double horas);

        string getNome();
        double getSalario();
        double getHoras();

    protected:
        string nome;
        double salario;
        double horas;

    private:
};

#endif // TRABALHADOR_H
