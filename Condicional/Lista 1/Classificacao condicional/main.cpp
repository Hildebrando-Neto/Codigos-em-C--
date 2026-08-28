// Classifica um numero de acordo com as condicoes do exercicio.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numero, aux;

    cout <<"Digite o numero da raiz: ";
    cin >> numero;

    aux = sqrt(numero);

    if(pow(aux,2) == numero){
        cout <<"Quadrado perfeito\n";
    }

    if(pow(aux,2) != numero){
        cout <<"Nao e quadrado perfeito\n";
    }


    return 0;
}
