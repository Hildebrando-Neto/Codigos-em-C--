//Codigo para calcular valores da serie de Maclaurin para seno usando laco for

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float calc;

    for(float contador = 0.0; contador <= 6.3; contador = contador + 0.1){

        calc = contador - (pow(contador,3)/6 + pow(contador,5)/120 - pow(contador,7)/5040);


        cout <<"O valor de seno "<<" " << contador <<"   com a serie de Mac Laurin truncada: " << calc << endl;


    }
    return 0;
}
