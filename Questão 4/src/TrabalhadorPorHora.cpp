#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(string nome, double horas, double salario)
{
    setNome(nome);
    CalcularPagamento(horas, salario);
}

void TrabalhadorPorHora::CalcularPagamento(double horas, double salario){
    if(horas <= 40){
        this->horas = horas;
        setSalario(salario*horas);
    }
    if(horas > 40){
        this->horas = horas;
        setSalario((salario*40)+(salario*1.5*(horas-40)));
    }
}
