//Codigo para encontrar numeros Kaprekar entre 1000 e 9999 usando laco for

#include <iostream>

using namespace std;

int main()
{
    int valor;

    for (int numero = 1000; numero <= 9999; numero++){

        valor = numero / 100 + numero % 100;

        if(valor * valor == numero){
            cout <<"O numero " << numero << " tem a caracteristica" << endl;
        }
    }
    return 0;
}
