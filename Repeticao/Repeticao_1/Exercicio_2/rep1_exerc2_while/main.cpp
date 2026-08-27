//Codigo para encontrar e exibir todos os divisores de um numero usando laco while

#include <iostream>

using namespace std;

int main()
{
    int numero, resto, contador = 1;

    cout <<"Insira um numero: ";
    cin >> numero;




    while (contador <= numero){

        resto = numero % contador;
        if(resto == 0){
        cout <<" " << contador <<" e divisor de" <<" " << numero << endl;
        }

        contador++;
    }






    return 0;
}
