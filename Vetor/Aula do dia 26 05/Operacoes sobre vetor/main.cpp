// Oferece operacoes de consulta e calculo sobre um vetor.
#include <iostream>

using namespace std;

int main()
{
    const int tam = 5;
    int array [tam];
    int opcao = 0, n, pos, maior, menor, soma = 0;


    for(int pos = 0; pos < tam; pos++){

        cout << "Array["<< pos <<"]=";
        cin >> array[pos];
    }

    system("clear");

    do{
        cout <<"   MENU   " << endl;
        cout <<"1 - Mostrar ordem contrária" << endl;
        cout <<"2 - Ler um valor e verificar se esta no conjunto" << endl;
        cout <<"3 - Calcular e escrever a amplitude total deste conjunto" << endl;
        cout <<"4 - Calcular e escrever a média aritmética deste conjunto" << endl;
        cout <<"9 - Sair" << endl;
        cout <<"Opção: ";
        cin >> opcao;

        system("clear");

        switch(opcao){

        case 1:
            cout <<"Ordem Contraria { ";
            for(int pos = tam - 1; pos >= 0; pos--){

                    cout << array[pos] << ",";
                }
                cout <<"}" << endl;
            break;

         case 2:
            cout <<"Insira o numero: ";
            cin >> n;
            for(pos = 0; pos < tam; pos++){

                if(n == array[pos]){
                    cout <<"Valor faz parte do conjunto" << endl;
               }

            }

                break;

          case 3:
            maior = menor = array[0];
            for(pos = 0; pos < tam; pos++){
                if(array[pos] > maior){
                    maior = array[pos];
                }
                if(array[pos] < menor){
                    menor = array[pos];
                }
            }
                cout <<"Amplitude: " << maior - menor << endl;

            break;

          case 4:
            soma = 0;
            for(pos = 0; pos < tam; pos++){
                soma += array[pos];
            }
            cout <<"Media: " << static_cast<double>(soma) / tam << endl;
            break;

        default: cout <<"Opcao Invalida" << endl;
        }
    }
    while(opcao != 9);

    return 0;
}
