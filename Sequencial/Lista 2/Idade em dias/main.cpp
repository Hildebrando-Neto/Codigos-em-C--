// Estima a idade de uma pessoa em dias.
#include <iostream>

using namespace std;

int main()
{
    int ano;
    int mes;
    int dia;
    int dias;
    int anocal;

    cout << "Digite o ano no qual nasceu: ";
    cin >> ano;

    cout << "Digite o mes em que nasceu: ";
    cin >> mes;

    cout << "Digite o dia em que nasceu: ";
    cin >> dia;

    anocal = (2022 - ano);


    dias = dia+(anocal * 365) + (mes * 30);

    cout << "Sua idade em dias e: " << dias << endl;



    return 0;
}
