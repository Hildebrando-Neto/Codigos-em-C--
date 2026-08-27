//Codigo para converter numeros entre diferentes bases numericas (base 2, 8 e 16)

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int opcao, n, resto = 0, i = 0, aux;

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
                resto = 0;
                i = 0;
                aux = n;
                while(aux != 0){
                resto = resto + aux % 2 * pow(10,i);
                aux = aux/2;
                i++;
                }
                cout <<"Na Base 2: " << resto << endl;
                break;

            case 2:
                resto = 0;
                i = 0;
                aux = n;
                while(aux != 0){
                resto = resto + aux % 8 * pow(10, i);
                aux = aux/8;
                i++;
                }
                cout <<"Na Base 8: " << resto << endl;
                break;

            case 3:
                string valor ="0123456789ABCDEF";
                string numero ="";
                aux = n;
               while(aux != 0){
                   numero = valor[aux % 16] + numero;
                   aux = aux/16;
            }
               cout <<"Na Base 16: " << numero << endl;
            }

    }while(opcao != 4);

    return 0;
}
