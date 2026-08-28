// Verifica se um numero e capicua usando um laco for.
#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    int ni = 0;
    cout <<"Digite um numero: ";
    cin >> numero;

    for(int aux = numero; aux > 0; aux = aux / 10){

        ni = ni * 10 + aux % 10;
    }
        if(numero == ni){
            cout <<"O numero  " << numero << " é Capicua" << endl;

        }else{
            cout <<"O numero  " << numero << " nao e Capicua" << endl;
        }



    return 0;
}
