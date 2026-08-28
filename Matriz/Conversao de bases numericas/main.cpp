// Converte numeros inteiros para as bases 2, 8 e 16.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int opcao, n;

       do{
            cout <<"Insira um numero: ";
            cin >> n;
            if(n == 0){
                return 0;
            }

            system("clear");

            cout <<"     MENU   " << endl;
            cout <<"1 - Base 2" << endl;
            cout <<"2 - Base 8" << endl;
            cout <<"3 - Base 16" << endl;
            cout <<"4 - Sair" << endl;
            cout <<"Opção: ";
            cin >> opcao;

            system("clear");


            switch(opcao){
            case 1:
            case 2:
            case 3: {
                int base = opcao == 1 ? 2 : opcao == 2 ? 8 : 16;
                const string digitos = "0123456789ABCDEF";
                string numero;
                int aux = n;
                do {
                    numero = digitos[aux % base] + numero;
                    aux /= base;
                } while (aux != 0);
                cout << "Na Base " << base << ": " << numero << endl;
                break;
            }
            default:
                break;
            }

    }while(opcao != 4);

    return 0;
}
