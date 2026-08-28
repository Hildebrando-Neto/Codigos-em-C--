// Calcula diferentes tipos de media conforme a opcao.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n1,n2,n3,calc;
    float raiz;
    int forma;

    for(int contador = 0; contador < 5; contador++){
    cout <<"Digite as notas: ";
    cin >> n1 >> n2 >> n3;


    cout <<"Escolha a forma de calculo: ";
    cin >> forma;

    /*switch(forma){

    case 1:
        calc = (n1 + n2 + n3) / 3;
        cout <<"Sua media aritmetica: " << calc << endl;
        break;

    case 2:
        calc = ( n1 * 3 ) + (n2 * 3) + (n3 * 4) /10;
        cout <<"Sua media ponderada: " << calc << endl;
        break;

    case 3:
        calc = 3 / (1 / n1 + 1 / n2 + 1 / n3);
        cout <<"Sua media harmonica: " << calc << endl;
        break;

    case 4:
        calc = n1*n2*n3;
        raiz = pow(calc, 1.0/3.0);
        cout <<"Sua media geometrica: " << raiz << endl;
        break;

    case 5:
        calc = sqrt((n1*n1) + (n2 * n2) + (n3 * n3));
        cout <<"Sua media quadratica: " << calc << endl;
        break;

    }*/


    //SOLUCAO EM CONDICIONAL ANINHADA

    if(forma == 1){
        calc = (n1 + n2 + n3) / 3;
        cout <<"Sua media aritmetica: " << calc << endl;
    } else if(forma == 2){
            calc = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
            cout <<"Sua media ponderada: " << calc << endl;
    } else if(forma == 3){
            calc = 3 / (1 / n1 + 1 / n2 + 1 / n3);
            cout <<"Sua media harmonica: " << calc << endl;
    } else if(forma == 4){
            calc = n1*n2*n3;
            raiz = pow(calc, 1.0/3.0);
            cout <<"Sua media geometrica: " << raiz << endl;
    } else if(forma == 5){
            calc = sqrt((n1*n1) + (n2 * n2) + (n3 * n3));
            cout <<"Sua media quadratica: " << calc << endl;
    } else {
            cout <<"!VALOR INVALIDO!";
    }




}
    return 0;

}
