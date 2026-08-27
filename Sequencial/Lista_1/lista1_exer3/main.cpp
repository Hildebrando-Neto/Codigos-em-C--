//Codigo para calcular a distancia entre dois pontos utilizando a formula euclidiana

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

    distancia = sqrt((ponto3 - ponto1) * (ponto3 - ponto1) + (ponto4 - ponto2) * (ponto4 - ponto2));

    cout << "A distancia e de: " << distancia << endl;















    return 0;
}
