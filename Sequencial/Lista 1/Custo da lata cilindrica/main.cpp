// Calcula o custo da superficie de uma lata cilindrica.
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846;

int main()
{
    float raio = 0;
    float altura = 0;
    float areab = 0;
    float areal = 0;
    float arealata = 0;

    cout.precision(2);


    cout<<"Digite o raio: ";
    cin>>raio;

    cout<<"DIgite a altura: ";
    cin>>altura;

    areab = pi * pow(raio, 2) * 2;
    areal = 2 * pi *raio * altura;
    arealata = areab + areal;

    cout <<"O custo da lata: R$ " << arealata * 155 << endl;


    return 0;
}
