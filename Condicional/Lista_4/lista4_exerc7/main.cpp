//Codigo para calcular volume e area de formas geometricas (cone, cilindro e esfera)

#include <iostream>
#include <math.h>
#define pi 3.1415

using namespace std;

int main()
{
    int formas;
    float volume,raio = 0.0,altura = 0.0,area;

    for(int contador = 0; contador < 3; contador++){

    cout <<"Digite o raio da forma: ";
    cin >> raio;

    cout <<"Digite a altura da forma: ";
    cin >> altura;

    cout <<"1 - cone reto\n";
    cout <<"2 - cilindro\n";
    cout <<"3 - esfera\n";
    cin >> formas;


    //EM SWITCH//

    /*switch (formas){

    case 1:
        volume = ((pi * pow(raio,2)) * altura) / 3;
        area = (pi * raio) * sqrt(pow(raio,2) + pow(altura,2));
        cout <<"Volume: \n" << volume <<"Area: \n" << area;

    case 2:
        volume = ((pi * pow(raio,2)) * altura);
        area = (2 * pi) * (raio * altura);
        cout <<"Volume: \n" << volume <<"Area: \n" << area;

    case 3:
        volume = (pi * 4 * pow(raio,3)) / 3;
        area = (4 * (pi * pow(raio,2)));
        cout <<"Volume: \n" << volume <<"Area: \n" << area;
    }*/

    //EM CONDICIONAL ANINHADA//

    if(formas == 1){
        volume = ((pi * pow(raio,2)) * altura) / 3;
        area = (pi * raio) * sqrt(pow(raio,2) + pow(altura,2));
        cout <<"Volume: " << volume << endl <<"Area: " << area << endl;
    }
    else
        if(formas == 2){
        volume = ((pi * pow(raio,2)) * altura);
        area = (2 * pi) * (raio * altura);
        cout <<"Volume: " << volume << endl <<"Area: " << area << endl;
    }

    else
        if(formas == 3){
        volume = (pi * 4 * pow(raio,3)) / 3;
        area = (4 * (pi * pow(raio,2)));
        cout <<"Volume: " << volume << endl <<"Area: " << area << endl;
    }





    }
    return 0;
}
