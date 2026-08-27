//Codigo para calcular o valor final do combustivel com base no tipo escolhido

#include <iostream>

using namespace std;

int main()
{
    float calc, litros = 0.0;
    char letra;

    cout <<"Quantidade de litros: ";
    cin >> litros;

    cout <<"Digite a letra correspondente ao combustivel\n";
    cout <<"a - Alcool\n";
    cout <<"d - Diesel\n";
    cout <<"g - Gasolina\n";
    cin >> letra;

    for (int contador = 0; contador < 3; contador++){

    //SOLUCAO EM CONDICIONAL ANINHADA//

    /*if(letra == 'a'){
        calc = litros * 4.805;
        cout <<"Valor a pagar:R$ " << calc << endl;
    }else{
        if(letra == 'd'){
            calc = litros * 5.953;
            cout <<"Valor a pagar:R$ " << calc << endl;
        }

        if(letra == 'g'){
            calc = litros * 6.565;
            cout <<"Valor a pagar:R$ " << calc << endl;
        }
        else cout <<"!CARACTERE INCOMPATIVEL!" << endl;
    }*/

    //SOLUCAO EM SWITCH//

    switch(letra){

    case 'a':
        calc = litros * 4.805;
        cout <<"Valor a pagar:R$ " << calc << endl;
        break;

    case 'd':
        calc = litros * 5.953;
        cout <<"Valor a pagar:R$ " << calc << endl;
        break;

    case 'g':
        calc = litros * 6.565;
        cout <<"Valor a pagar:R$ " << calc << endl;
        break;

    default:
        cout <<"!CARACTERE INCOMPATIVEL!" << endl;
    }

}
    return 0;

}
