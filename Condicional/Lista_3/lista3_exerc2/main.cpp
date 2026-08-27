//Codigo para calcular o valor da fita de acordo com o dia da semana e a categoria da fita

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
        desconto = 0.4;
    }
    else {
        desconto = 0;
    }

    if(cat == 'lancamento'){
        preco = preco * 0.85;
    }
    else if(cat == 'comum'){
        preco = preco;
    }
    
    precototal = preco * (1 - desconto);
    cout <<"Preco Total:R$ " << precototal << endl;

    return 0;
}
