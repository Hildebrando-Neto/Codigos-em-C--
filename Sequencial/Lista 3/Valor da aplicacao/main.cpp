// Calcula o valor acumulado de uma aplicacao financeira.
#include <iostream>

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


    taxa /= 100;
    valoracumulado = aplicacao * (1 + taxa * meses);

    cout << "Rendimento final: R$ " << valoracumulado << endl;

    return 0;
}
