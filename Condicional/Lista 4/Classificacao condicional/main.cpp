// Realiza uma classificacao usando estruturas condicionais.
#include <iostream>

using namespace std;

int main()
{
    int tipo;
    float area, calc, Custofinal = 0;
    string nome;

    for(int contador = 0; contador < 4; contador++){

    cout <<"Digite seu nome: ";
    cin >> nome;

    cout <<"Escolha o tipo de pulverizacao\n";
    cout <<"Tipo 1: pulverizacao contra ervas daninhas, R$ 50,00 por acre\n";
    cout <<"Tipo 2: pulverizacao contra gafanhotos, R$ 100,00 por acre\n";
    cout <<"Tipo 3: pulverizacao contra broca, R$ 150,00 por acre\n";
    cout <<"Tipo 4: pulverizacao contra tudo acima, R$ 250,00 por acre\n";
    cin >> tipo;

    cout <<"Digite o tamanho da area a ser pulverizada: \n";
    cin >> area;

    //SOLUCAO CONDICIONAL COMPOSTA//

    /*if(tipo == 1 && area >= 300)
    {
        calc = area * 50;
        Custofinal = calc -(calc * 0.05);
        cout <<"Valor total: " << Custofinal;
    }
    else
    {
        calc = 50 * area;
        Custofinal = calc;
        cout <<"Valor total: " << Custofinal << endl;
    }
        if(tipo == 2 && area >= 300)
    {
        calc = area * 100;
        Custofinal = calc-(calc*0.05);
        cout <<"Valor total: " << Custofinal << endl;
    }
    else
    {
        calc = 100 * area;
        Custofinal = calc;
        cout <<"Valor total: " << Custofinal << endl;
    }
        if(tipo == 3 && area >= 300)
    {
        calc = area * 150;
        Custofinal = calc -(calc * 0.05);
        cout <<"Valor total: " << Custofinal << endl;
    }
    else
    {
        calc = 150 * area;
        Custofinal = calc;
        cout <<"Valor total: " << Custofinal << endl;
    }
        if(tipo == 4 && area >= 300)
    {
        calc = area * 250;
        Custofinal = calc -(calc * 0.05);
    }
    else
    {
        calc = 250 * area;
        Custofinal = calc;
    }
        if(Custofinal>=10750)
    {
        Custofinal = Custofinal-(Custofinal * 0.10);
    }
    cout <<"O nome do fazendeiro: " << nome << endl;
    cout <<"custo final da pulverizacao e:R$ "<<Custofinal<<endl;*/


    //SOLUCAO COM SWITCH//

    switch(tipo){

    case 1:
        calc = area * 50;
        Custofinal = calc -(calc * 0.05);
        cout <<"Valor total: " << Custofinal;
        break;


    case 2:
        calc = area * 100;
        Custofinal = calc-(calc*0.05);
        cout <<"Valor total: " << Custofinal;
        break;

    case 3:
        calc = area * 150;
        Custofinal = calc -(calc * 0.05);
        cout <<"Valor total: " << Custofinal;
        break;

    case 4:
        calc = area * 250;
        Custofinal = calc -(calc * 0.05);
        cout <<"Valor total: " << Custofinal;
        break;



}
}

    return 0;
}
