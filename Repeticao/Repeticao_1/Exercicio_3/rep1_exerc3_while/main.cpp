//Codigo para calcular valores da serie de Maclaurin para seno usando laco while

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float contador = 0.0, calc;

    while (contador <= 6.3){
        calc = contador - pow(contador,3)/6 + pow(contador,5)/120 - pow(contador,7)/5040;
        cout<<"O valor de seno: " << contador <<"  com a serie de mac laurin: " << calc << endl;
        contador = contador + 0.1;

    }
    return 0;
}
