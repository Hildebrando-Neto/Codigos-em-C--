//Codigo para inverter os digitos de um numero de tres casas

#include <iostream>

using namespace std;

int main()
{
    int C, D, U;
    int num;
    int invertido;


    cout <<"Digite seu numero de 3 casas: ";
    cin >> num;


    C = num / 100;
    D = num % 100;
    D = D / 10;
    U = num % 100;
    U = U % 10;
    U = U * 100;
    D = D * 10;

    invertido = C + D + U;



    cout <<"Original: " << num;

    cout <<"\nInvertido: " << invertido << endl;


    return 0;
}
