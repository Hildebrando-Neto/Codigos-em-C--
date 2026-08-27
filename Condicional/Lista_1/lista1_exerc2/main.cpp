//Código para calcular o reajuste salarial de um funcionário

#include <iostream>

using namespace std;

int main()
{
    float salario;
    float salarioreaj;

    cout <<"Digite seu salario: ";
    cin >> salario;

    if (salario <= 1050){
    salarioreaj = (salario * 0.5) + salario;

    cout <<"Seu salario reajustado e de :R$ " << salarioreaj;
    }

    if(salario > 1050){
    salarioreaj = (salario * 0.3) + salario;
    cout <<"Seu salario reajustado é de :R$ " << salarioreaj << endl;
    }

    return 0;
}
