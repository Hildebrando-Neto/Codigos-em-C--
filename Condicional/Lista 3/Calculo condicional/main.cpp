// Executa calculos selecionados por condicoes.
#include <iostream>

using namespace std;

int main()
{
    float preco, v1 = 0.0, v2 = 0.0, v3 = 0.0, v4 = 0.0, precofinal;
    char ar, pintura, vidro, direcao;

    cout <<"Preco inicial:R$ ";
    cin >> preco;

    cout <<"(S,N) Ar condicionado:R$ 1750.00" << endl;
    cin >> ar;

    cout <<"(S,N) Pintura Metálica:R$ 800,00" << endl;
    cin >> pintura;

    cout <<"(S,N) Vidro Elétrico:R$ 1200,00" << endl;
    cin >> vidro;

    cout <<"(S,N) Direção Hidráulica:R$ 2000,00" << endl;
    cin >> direcao;

    if(ar == 'S'){
        v1 = 1750;
    }

    if(pintura == 'S'){
        v2 = 800;
    }

    if(vidro == 'S'){
        v3 = 1200;
    }

    if(direcao == 'S'){
        v4 = 2000;
    }

    precofinal = preco + v1 + v2 + v3 + v4;
    cout <<"Preco final:R$ " << precofinal << endl;

    return 0;
}
