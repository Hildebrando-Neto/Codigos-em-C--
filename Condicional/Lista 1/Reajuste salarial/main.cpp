#include <iostream>

using namespace std;

int main()
{
    float salario;
    float salarioreaj, salarioreaj2;

    cout <<"Digite seu salario: ";
    cin >> salario;


    if (salario <= 1050){
    salarioreaj = (salario * 0.5) + salario;

    cout <<"Seu salario reajustado e de :R$ " << salarioreaj;
    }



    if(salario > 1050){
    salarioreaj2 = (salario * 0.3) + salario;
    cout <<"Seu salario reajustado e de :R$ " << salarioreaj2 << endl;
    }

    return 0;
}
