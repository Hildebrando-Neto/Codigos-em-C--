//Código para verificar se um numero possui a característica de Kaprekar

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numero;
    int n1, n2, n3, n4, aux;
    int primeira, segunda, calculo, soma;

    cout << "Digite um numero: ";
    cin >> numero;

    n1 = numero / 1000;
    aux = numero % 1000;
    n2 = aux / 100;
    aux = aux % 100;
    n3 = aux / 10;
    n4 = aux % 10;

    primeira = (n1 * 10) + n2;
    segunda = (n3 * 10) + n4;
    soma = primeira + segunda;
    calculo = pow(soma,2);

    if(calculo == numero){
        cout <<" Seu numero possui a caracteristica\n";
    }

    if(calculo != numero){
        cout <<" Seu numero não possui a caracteristica\n" << endl;
    }


    return 0;
}
