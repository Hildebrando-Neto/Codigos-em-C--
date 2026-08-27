//Codigo para calcular os lados de um triangulo retangulo de Euclides

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float lado1, lado2, M, N, hipotenusa;

    cout.precision(2);

    cout << "Digite o valor de M: ";
    cin >> M;

    cout << "Digite o valor de N: ";
    cin >> N;

    lado1 = pow(M,2) - pow(N,2);

    lado2 = 2 * M * N;

    hipotenusa = pow(M,2) + pow(N,2);

    cout << "\nTamanho do lado 1: " << lado1;
    cout << "\nTamanho do lado 2: " << lado2;
    cout << "\nHipotenusa do triangulo: " << hipotenusa << endl;


    return 0;
}
