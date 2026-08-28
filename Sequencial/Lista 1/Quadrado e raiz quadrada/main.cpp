// Calcula o quadrado e a raiz quadrada de um numero.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numero;
    int quadrado;
    float raiz;
    cout.precision(3);

    // Obs: cout.precision aplicado apenas para detalhar melhor a raiz.

    cout << "Digite seu numero inteiro: ";
    cin>>numero;

    quadrado = (numero * numero);



    raiz = sqrt (numero);



    cout << "Numero: " << numero;
    cout << "Quadrado: " << quadrado;
    cout << "Raiz: " << raiz << endl;

    return 0;
}
