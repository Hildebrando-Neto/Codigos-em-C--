//Codigo para criar uma matriz de acordo com o numero de linhas e colunas digitadas pelo usuario

#include <iostream>
using namespace std;

int main(){

    int linhas, colunas;
    
    cout << "Digite o numero de linhas: ";
    cin >> linhas;
    cout << "Digite o numero de colunas: ";
    cin >> colunas;
    
    int matriz[linhas][colunas];
    
    // Preencher matriz
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Digite o valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    // Exibir matriz
    cout << "\nMatriz:\n";
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
