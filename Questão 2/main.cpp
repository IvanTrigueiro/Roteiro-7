#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario func(2114, "Joao", 50000);
    cout << func.getMatricula() << "--" << func.getNome() << "--" << func.getSalario() <<endl;

    Consultor consultor(func, 10.0);


    return 0;
}
