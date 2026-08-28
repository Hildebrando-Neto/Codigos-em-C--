#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    float preco, desconto = 0.0, precototal;
    char cat;
    int dia;

    cout <<"Digite o preco da fita: ";
    cin >> preco;

    cout <<"Digite o dia da semana: ";
    cin >> dia;

    cout <<"Digite a categoria: ";
    cin >> cat;

    if (dia == 2 || dia == 3 || dia == 5){
        desconto = preco - (0.4 * preco);
    }
    else
        if(dia == 4 || dia == 6 || dia == 7 || dia == 1){
            desconto = 0;
        }
    else
        if(cat == 'lancamento'){
            preco = preco * 0.15;
        }

    else
        if(cat == 'comum'){
            preco = preco;
        }

    precototal = desconto + preco;
    cout <<"Preco Total:R$ " << precototal << endl;


    return 0;
}
