#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;


class Funcionario
{
    public:
        Funcionario();
        Funcionario(int matricula, string nome, double salario);
        void setMatricula(int matricula);
        void setNome(string nome);
        void setSalario(double salario);
        int getMatricula();
        string getNome();
        double getSalario();
    private:
        int matricula;
        string nome;
        double salario;
};

#endif // FUNCIONARIO_H
