//Codigo para calcular a renda total de um estadio de futebol por tipo de ingresso

#include <iostream>

using namespace std;

int main()
{
    int pop;
    int geral;
    int arqui;
    int cadeiras;
    int pubtotal;
    int rendaTotal;


    cout << "Publico total do estadio de futebol: ";
    cin >> pubtotal;

    pop = pubtotal * 0.1;
    geral = pubtotal * 0.5;
    arqui = pubtotal * 0.3;
    cadeiras = pubtotal * 0.1;

    rendaTotal = (pop * 5) + (geral * 10) + (arqui * 20) + (cadeiras * 40);

    cout << "A Renda Total do jogo: " << rendaTotal << endl;






    return 0;
}
