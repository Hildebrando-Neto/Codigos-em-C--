// Calcula valores para diferentes formas geometricas.
#include <iostream>

using namespace std;

int main()
{
    int moeda;
    float calc;
    float quantia = 0;

    for(int contador = 0; contador < 4; contador++){


    cout <<"Digite a quantia a ser calculada: ";
    cin >> quantia;

    cout <<"Escolha a moeda\n";
    cout <<"1 - Euro\n";
    cout <<"2 - Libra Esterlina\n";
    cout <<"3 - Dolar\n";
    cout <<"4 - Iene\n";
    cin >> moeda;


    /*if (moeda == 1){
        calc = quantia / 6.617;
        cout <<"Sua quantia em euro:R$ " << calc << endl;
    }

    if (moeda == 2){
        calc = quantia / 6.816;
        cout <<"Sua quantia em libra:R$ " << calc << endl;
    }

    if (moeda == 3){
        calc = quantia / 5.071;
        cout <<"Sua quantia em dolar:R$ " << calc << endl;
    }

    if (moeda == 4){
        calc = quantia / 3.018;
        cout <<"Sua quantia em iene:R$ " << calc << endl;
    }*/

    switch(moeda){

    case 1:
        calc = quantia / 6.617;
        cout <<"Sua quantia em euro:R$ " << calc << endl;
        break;


    case 2:
        calc = quantia / 6.816;
        cout <<"Sua quantia em libra:R$ " << calc << endl;
        break;


    case 3:
        calc = quantia / 5.071;
        cout <<"Sua quantia em dolar:R$ " << calc << endl;
        break;


        default:
        calc = quantia / 3.018;
        cout <<"Sua quantia em iene:R$ " << calc << endl;
        break;
    }

}


    return 0;
}
