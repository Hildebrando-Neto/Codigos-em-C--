// Gera um vetor e mostra seus numeros pares.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int tam = 10;
    int opcao = 0;

    cout <<"Intervalo[0..N] = ";
    int n = 0;

    cin >> n;

    int vetor [tam];

    for(int pos = 0; pos < tam; pos++)

        vetor[pos] = rand() % n + 1;

    system("clear");
    do{

        cout <<"Menu " << endl;
        cout <<"1 - Mostra Vetor" << endl;
        cout <<"2 - Mostrar os Numero Pares"<< endl;
        cout <<"9 - Sair" << endl;
        cout <<"Opção: ";
        cin >> opcao;
        switch(opcao){
        case (1):
            cout <<"Vetor = { ";
            for(int pos = 0; pos < tam; pos++){
                cout << vetor[pos] << ", ";
            }
            cout <<"}" << "\n";

            break;

        case(2):
            cout << "Numeros pares = { ";
            for (int pos = 0; pos < tam; pos++) {
                if (vetor[pos] % 2 == 0) {
                    cout << vetor[pos] << ", ";
                }
            }
            cout << "}\n";
            break;

        default: cout <<"Opção Errada" << endl;
        }
    }

    while(opcao != 9);








    return 0;
}
