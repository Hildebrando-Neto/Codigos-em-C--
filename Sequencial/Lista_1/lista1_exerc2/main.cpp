//Codigo para calcular o volume de uma piramide

#include <iostream>

using namespace std;

int main()
{
    float volume;
    float base;
    float altura;

    cout.precision(2);

    cout<<"Digite sua base: ";
    cin>>base;

    cout<<"Digite a altura da piramide: ";
    cin>>altura;

    volume = base * altura / 3;

    cout<<"A base da sua piramide e: " << volume << endl;

    return 0;






}
