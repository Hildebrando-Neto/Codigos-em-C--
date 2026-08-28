// Calcula a area e o volume de um cilindro.
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    float raio;
    int altura;
    int area;
    float volume;

    cout.precision(2);


    cout << "Informe o raio: ";
    cin >> raio;

    cout << "Informe a altura: ";
    cin >> altura;

    area = 2 * 3.14 * raio * (altura + raio);

    volume = 3.14 * pow(raio,2) * altura;


    cout << "Seu cilindro tem area de: " << area;
    cout << "\nSeu cilindro tem volume de: " << volume << endl;








    return 0;
}
