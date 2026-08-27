//Codigo para calcular o custo ao consumidor baseado no custo de fabrica

#include <iostream>

using namespace std;

int main()
{
    int custoFabrica, percDistrib, percImposto;
    float Consumidor;

    cout << "Informe o valor do custo de fabrica: ";
    cin >> custoFabrica;


    percDistrib = custoFabrica * 0.12;
    percImposto = custoFabrica * 0.3;


    Consumidor = custoFabrica + percDistrib + percImposto;

    cout << "Custo ao consumidor em reais: R$ " << Consumidor << endl;


    return 0;
}
