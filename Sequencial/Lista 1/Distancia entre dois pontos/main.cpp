// Calcula a distancia entre dois pontos no plano.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int ponto1;
    int ponto2;
    int ponto3;
    int ponto4;
    float distancia;

    cout.precision(4);



    cout << "Digite as coordenadas do primeiro ponto: ";

    cin>> ponto1 >> ponto2;

    cout << "Digite as coordenadas para o segundo ponto: ";
    cin>> ponto3 >> ponto4;

    float diferencaX = ponto3 - ponto1;
    float diferencaY = ponto4 - ponto2;
    distancia = sqrt(diferencaX * diferencaX + diferencaY * diferencaY);

    cout << "A distancia e de: " << distancia << endl;
    
    
    return 0;
}
