//Codigo para encontrar e exibir todos os divisores de um numero usando laco do-while

#include <iostream>

using namespace std;

int main()
{
    int contador = 1, numero, resto;

    cout <<"Insira um numero: ";
    cin >> numero;

    do{
        resto = numero % contador;

        if(resto == 0){
        cout <<" " << contador <<" e divisor de" << " " << numero << endl;
        }
        contador++;
    }
    while (contador <= numero);


    return 0;
}
