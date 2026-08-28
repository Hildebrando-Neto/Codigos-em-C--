// Inverte os algarismos de um numero de tres casas.
#include <iostream>

using namespace std;

int main()
{
    int num;
    int C;
    int D;
    int U;
    int invertido;



    cout << "Digite um numero de 3 casas: ";
    cin >> num;

    C = num / 100;
    D = num % 100;
    D = D / 10;
    U = num % 100;
    U = U % 10;
    U = U * 100;
    D = D * 10;

    invertido = C + D + U;

    cout << "O numero invertido e: " << invertido << endl;


    return 0;
}
