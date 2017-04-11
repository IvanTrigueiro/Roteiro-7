#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
using namespace std;

int main()
{

    Cirurgiao cirurgiao("Ivan", 100, 176, "Cirurgiao", 14, 04);
    cout << "Nome: " << cirurgiao.getNome()<< endl;
    cout << "Peso: " << cirurgiao.getPeso()<< endl;
    cout << "Altura: " << cirurgiao.getAltura()<< endl;

    Oftalmologista oftalmo("Hiroshi",75, 173, "Oftalmologista", 25, 05);
    cout << "Nome: " << oftalmo.getNome()<< endl;
    cout << "Peso: " << oftalmo.getPeso()<< endl;
    cout << "Altura: " << oftalmo.getAltura()<< endl;

    Otorrino otorrino("Lucas", 85, 169, "Otorrino");
    cout << "Nome: " << otorrino.getNome()<< endl;
    cout << "Peso: " << otorrino.getPeso()<< endl;
    cout << "Altura: " << otorrino.getAltura()<< endl;
    otorrino.RemocaoCera("Joao");

    return 0;
}
