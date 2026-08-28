// Calcula volumes de esferas para varios raios usando repeticao.

#include <iostream>
#include <cmath>
#define pi 3.141592653
using namespace std;

int main()
{    
    float vol = 0;

    for (float contador = 0.0; contador <= 20.0; contador += 0.5){


        vol = (4.0 / 3.0) * pi * pow(contador,3.0);
        cout <<"Volume: " << vol << endl;


    }

    return 0;
}
