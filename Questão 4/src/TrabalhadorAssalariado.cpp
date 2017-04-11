#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double horas, double salario)
{
    setNome(nome);
    CalcularPagamento(horas, salario);
}

void TrabalhadorAssalariado::CalcularPagamento(double horas, double salario){
    this->horas = horas;
    setSalario(salario*40);
}
