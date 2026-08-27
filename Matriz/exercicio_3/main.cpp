//Codigo para realizar operacoes matematicas com matrizes 3x3 (adicao, subtracao e multiplicacao)

#include <iostream>

using namespace std;

const int qLinhas = 3;
const int qColunas = 3;

void lerMatriz(int matriz[][qColunas], int qLinhas, int qColunas){
    for(int linha = 0; linha < qLinhas; linha++){
        for(int coluna = 0; coluna < qColunas; coluna++){
            std::cout<<"Matriz ["<<linha<<"]["<<coluna<<"] = ";
            std::cin>>matriz[linha][coluna];
        }
    }
}
void mostrarMatriz(int matriz[][qColunas], int qLinhas, int qColunas){
    std::cout<<"\n MATRIZ \n";
    for(int linha = 0; linha < qLinhas; linha++){
        std::cout<<"| ";
        for(int coluna = 0; coluna < qColunas; coluna++){
            std::cout<<matriz[linha][coluna]<<" ";
        }
        std::cout<<"|\n";
    }
}

int main()
{   
    int opcao, i, j;
    int mC[qLinhas][qColunas];
    int matriz[qLinhas][qColunas];
    lerMatriz(matriz,qLinhas,qColunas);
    int mB[qLinhas][qColunas];
    lerMatriz(mB,qLinhas,qColunas);
    mostrarMatriz(matriz,qLinhas,qColunas);
    mostrarMatriz(mB,qLinhas,qColunas);


    do{
            system("clear");
            cout <<"  MENU  " << endl;
            cout <<"1 - Adição" << endl;
            cout <<"2 - Subtração" << endl;
            cout <<"3 - Multiplicação" << endl;
            cout <<"9 - Sair" << endl;
            cout <<"Opção: ";
            cin >> opcao;

            switch(opcao){
            case 1:
                mostrarMatriz(matriz,qLinhas,qColunas);
                mostrarMatriz(mB,qLinhas,qColunas);
                cout <<"\n MATRIZ C \n";
                for(i = 0; i < 3; i++){
                    cout <<"| ";
                    for(j = 0; j < 3; j++){
                        mC[i][j] = matriz[i][j] + mB[i][j];
                        cout <<" " << mC[i][j];
                }
                    cout <<" |\n";
            }
                break;
                system("clear");

            case 2:
                mostrarMatriz(matriz,qLinhas,qColunas);
                mostrarMatriz(mB,qLinhas,qColunas);
                cout <<"\n MATRIZ C \n";
                for(i = 0; i < 3; i++){
                    cout <<"| ";
                    for(j = 0; j < 3; j++){
                        mC[i][j] = matriz[i][j] - mB[i][j];
                        cout <<" " << mC[i][j];
                }
                    cout <<" |\n";
            }
                break;

            case 3:
                mostrarMatriz(matriz,qLinhas,qColunas);
                mostrarMatriz(mB,qLinhas,qColunas);
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        mC[i][j] = 0;
                for(int i = 0; i < 3; i++)
                    for(int j = 0; j < 3; j++)
                        for(int k = 0; k < 3; k++)
                            mC[i][j] += matriz[i][k] * mB[k][j];
                mostrarMatriz(mC,qLinhas,qColunas);

                break;
            }
        }
        while ( opcao != 9);

    return 0;
}
