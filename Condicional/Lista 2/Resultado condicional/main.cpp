// Calcula e apresenta um resultado com estruturas condicionais.
#include <iostream>

using namespace std;

int main()
{
    string nome;
    int conta;
    float bancario, soma;

    cout <<"Digite o seu nome: " << endl;
    cin >> nome;

    cout <<"Digite o numero da conta: " << endl;
    cin >> conta;

    cout <<"Digite o seu saldo bancario: " << endl;
    cin >> bancario;

    if(bancario <= 1000){
        soma = bancario + 25;
        cout <<"Novo salario:R$ " << soma << endl;

    }else{
        if(bancario > 1000 && bancario < 2000){
            soma = bancario + 20;
            cout <<"Novo salario:R$ " << soma << endl;

        }else{
            if(bancario > 2000 && bancario < 3500){
            soma = bancario + 13;
            cout <<"Novo salario:R$ " << soma << endl;
            }
            else cout <<"Isento de tarifas" << endl;


    }}

    return 0;
}
