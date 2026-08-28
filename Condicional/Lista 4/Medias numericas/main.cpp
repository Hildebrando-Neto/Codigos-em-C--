// Calcula uma media conforme a opcao escolhida.
#include <iostream>

using namespace std;

int main()
{
    float produto = 0, calc;
    int codigo;

    for (int contador = 0; contador < 4; contador++){

    cout <<"Digite o valor do produto: ";
    cin >> produto;
    cout <<"Qual oferta se encaixa\n";
    cout <<"1 - A vista, dinheiro ou cheque, 10% de desconto\n";
    cout <<"2 - A vista, cartao de credito, 5% de desconto\n";
    cout <<"3 - Em 2 vezes, preco normal da etiqueta sem juros\n";
    cout <<"4 - Em 3 vezes, preco normal da etiqueta + 10% de juros\n";
    cin >> codigo;

    //CONSTRUCAO UTILIZANDO SWITCH//

    switch(codigo){

    case 1:
        calc = produto - (produto * 0.1);
        cout <<"Valor final:R$ " << calc << endl;
        break;

    case 2:
        calc = produto - produto * 0.05;
        cout <<"Valor final:R$ " << calc << endl;
        break;

    case 3:
        calc = produto / 2;
        cout <<"2 vezes de:R$ " << calc << endl;
        break;

    case 4:
        calc = (produto / 3) + (produto * 0.1);
        cout <<"3 vezes de:R$ " << calc << endl;
        break;
    }

    //CONSTRUCAO UTILIZANDO CONDICIONAL ANINHADA//

    /*if(codigo == 1){
        calc = produto - (produto * 0.1);
        cout <<"Valor final:R$ " << calc << endl;

    }else{

        if(codigo == 2){
            calc = produto - produto * 0.05;
            cout <<"Valor final:R$ " << calc << endl;
    }else{

        if(codigo == 3){
            calc = produto / 2;
            cout <<"Valor final:R$ " << calc << endl;

        }else calc = (produto / 3) + (produto * 0.1);
        cout <<"Valor final:R$ " << calc << endl;
    }


}*/
}
    return 0;

}
