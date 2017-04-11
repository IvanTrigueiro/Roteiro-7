#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <string>
using namespace std;

int main()
{
    string name;
    double hours, salary;

    TrabalhadorPorHora trab("Hiroshi", 40, 100);
    cout << "Nome do trabalhador : "<< trab.getNome() <<endl;
    cout << "Horas trabalhadas: " << trab.getHoras() <<endl;
    cout << "Salario: " << trab.getSalario() <<endl;

    cout << "Digite o nome, as horas e o salario/hora do trabalhado: " <<endl;
    cin >> name >> hours >> salary;

    TrabalhadorAssalariado trab2(name, hours, salary);
    cout << "Nome do trabalhador : "<< trab2.getNome() <<endl;
    cout << "Horas trabalhadas: " << trab2.getHoras() <<endl;
    cout << "Salario: " << trab2.getSalario() <<endl;


    return 0;
}
