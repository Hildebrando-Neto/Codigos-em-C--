#include <iostream>

using namespace std;

int main()
{
    int numero;
    int resto;

    cout << "Digite seu numero: ";
    cin >> numero;

    resto = numero % 2;

    if(resto == 0)
        cout << "Seu numero e Par: " << numero << endl;
    else
        cout << "Seu numero e Impar: " << numero << endl;




    return 0;
}
