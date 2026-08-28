// Avalia uma situacao numerica usando condicoes.
#include <iostream>

using namespace std;

int main()
{
    int conta;
    int tipo;
    int consumo;
    int calculo;

    cout <<"Numero da conta: ";
    cin >> conta;

    cout <<"Seu tipo de Residencia\n";
    cout <<"1 - Residencial\n";
    cout <<"2 - Comercial\n";
    cout <<"3 - Industrial\n";
    cin >> tipo;

    cout <<"consumo de agua em metros cubicos: ";
    cin >> consumo;

    switch(tipo){

    case 1:
       calculo = 5 + 0.55 * consumo;
       cout <<"Sua conta: " << conta << endl;
       cout <<"Valor a ser pago:R$ " << calculo << endl;
        break;

    case 2:
        calculo = 150 + 1.25 * consumo;
        cout <<"Sua conta: " << conta << endl;
        cout <<"Valor a ser pago:R$ " << calculo << endl;
        break;

    case 3:
        calculo = 280 + 2.54 * consumo;
        cout <<"Sua conta: " << conta << endl;
        cout <<"Valor a ser pago:R$ " << calculo << endl;
        break;
    }





    return 0;
}
