//Codigo para calcular o valor de uma prestacao com juros de atraso

#include <iostream>

using namespace std;

int main()
{
    int atraso, taxa;
    float prestacao, valorAtualizado;


    cout << "Digite o valor da prestacao: ";
    cin >> prestacao;

    cout << "Digite a taxa de juros: ";
    cin >> taxa;

    cout << "Digite o tempo de atraso: ";
    cin >> atraso;



    valorAtualizado = prestacao + ((prestacao * taxa) / 100) * atraso;

    cout << "O valor atual e: R$ " << valorAtualizado << endl;


    return 0;
}
