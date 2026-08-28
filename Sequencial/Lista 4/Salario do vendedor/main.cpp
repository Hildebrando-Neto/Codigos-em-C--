// Calcula o salario total de um vendedor de televisores.
#include <iostream>

using namespace std;

int main()
{
    int lcd = 50;
    int led = 60;
    int plasma = 55;
    int vendidas, lcdvend, ledvend, plasmavend;
    float salarioTotal;
    float fixo;

    cout << "Digite seu salario fixo:R$ ";
    cin >> fixo;

    cout << "Tv's lcd vendidas: ";
    cin >> lcdvend;

    cout << "Tv's led vendidas: ";
    cin >> ledvend;

    cout << "Tv's plasma vendidas: ";
    cin >> plasmavend;



    vendidas = (lcdvend * lcd) + (ledvend * led) + (plasmavend * plasma);

    salarioTotal = fixo + vendidas;

    cout << "Seu Salario Total e: R$ " << salarioTotal << endl;




    return 0;
}
