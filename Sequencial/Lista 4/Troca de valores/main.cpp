// Troca os valores armazenados em duas variaveis.
#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int aux;

    cout <<" Informe o valor A: ";
    cin >> A;

    cout <<" Informe o valor B: ";
    cin >> B;

    aux = A;
    A = B;
    B = aux;

    cout <<"Valor A: " << A, cout <<"\nValor B: " << B << endl;


    return 0;
}
