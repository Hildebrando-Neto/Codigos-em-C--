// Calcula um valor usando uma escolha condicional.
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, calc;
    char escolha;

    for(int contador = 0; contador < 4; contador++){

    cout <<"Primeiro numero: ";
    cin >> num1;

    cout <<"Segundo numero: ";
    cin >> num2;

    cout <<"Escolha a operacao aritmetica pelo simbolo\n";
    cout <<"+ - Adicao\n";
    cout <<"- - Subtracao\n";
    cout <<"* - multiplicacao\n";
    cout <<"/ - divisao\n";
    cin >> escolha;


    //SOLUCAO COM SWITCH//

    /*switch(escolha){

    case '+':
       calc = num1 + num2;
       cout <<"Seu resultado: " << calc << endl;
        break;

   case '-':
        calc = num1 - num2;
        cout <<"Seu resultado: " << calc << endl;
        break;

   case '*':
        calc = num1 * num2;
        cout <<"Seu resultado: " << calc << endl;
        break;

   case '/':
        calc = num1 / num2;
        cout <<"Seu resultado: " << calc << endl;
        break;

  default:
        cout <<"Use apenas simbolos\n";

    }*/


    //SOLUCAO COM CONDICIONAL COMPOSTA//

    if(escolha == '+'){
        calc = num1 + num2;
        cout <<"Seu resultado: " << calc << endl;
    }

    if(escolha == '-'){
        calc = num1 - num2;
        cout <<"Seu resultado: " << calc << endl;
    }

    if(escolha == '*'){
        calc = num1 * num2;
        cout <<"Seu resultado: " << calc << endl;
    }

    if(escolha == '/'){
        calc = num1 / num2;
        cout <<"Seu resultado: " << calc << endl;
    }

    else cout <<"!Digite apenas simbolos!" << endl;


}

    return 0;
}
