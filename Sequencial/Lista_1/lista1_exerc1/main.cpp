//Codigo para calcular os custos de uma lata de tinta cilindrica

#include <iostream>
#include <math.h>
using namespace std;

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

    cout<<"Digite a altura: ";
    cin>>altura;

    areab = M_PI * pow(raio, 2) * 2;
    areal = 2 * M_PI *raio * altura;
    arealata = areab + areal;

    cout <<"O custo da lata: R$ " << arealata * 155 << endl;


    return 0;
}
