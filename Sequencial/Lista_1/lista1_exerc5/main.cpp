//Codigo para calcular o custo final de um veiculo com gastos de combustivel

#include <iostream>

using namespace std;

int main()
{
    int tviagem;
    int velmedia = 0;
    int litros;
    float preco;
    float distancia;

    cout.precision(4);

    //Obs: precision aplicado para deixar bem detalhado o valor a ser pago.

    cout << "Digite o tempo da viagem: ";
    cin >> tviagem;

    cout << "Digite a velocidade media do veiculo: ";
    cin >> velmedia;

    distancia = (tviagem * velmedia);

    litros = (distancia / 12);

    preco = (litros * 5.90);

    cout << "O valor a ser pago em gasolina sera:R$ " << preco << endl;








    return 0;
}
