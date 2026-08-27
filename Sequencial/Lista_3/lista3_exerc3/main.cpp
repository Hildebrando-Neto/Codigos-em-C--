//Codigo para calcular o valor acumulado de uma aplicacao financeira com juros compostos

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float aplicacao;
    float taxa;
    int meses;
    float valoracumulado;

    cout << "Valor da aplicacao em R$: ";
    cin >> aplicacao;

    cout << "Taxa de juros em %: ";
    cin >> taxa;

    cout << "Quantidades de meses aplicados: ";
    cin >> meses;


    valoracumulado = aplicacao * pow(1 + taxa / 100, meses);

    cout << "Rendimento final: R$ " << valoracumulado << endl;

    return 0;
}
