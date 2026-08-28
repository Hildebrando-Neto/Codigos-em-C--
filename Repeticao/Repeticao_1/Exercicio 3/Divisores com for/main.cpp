// Lista os divisores de um numero usando for.
#include <iostream>

using namespace std;

int main()
{
    int numero;
    int resto;

    cout <<"Insira um numero: ";
    cin >> numero;

    for(int contador = 1; contador <= numero; contador++){

        resto = numero % contador;
        if(resto == 0)
        cout <<" " << contador << " e divisor de " << " " << numero << endl;
    }

    return 0;
}
