//Código para verificar se uma pessoa é eleitor obrigatório, facultativo ou não eleitor

#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout <<"Digite sua idade: ";
    cin >> idade;

    if(idade < 16){
        cout <<"Nao eleitor" << endl;
    }
    else if (idade >= 18 && idade < 65){
        cout <<"Eleitor Obrigatorio" << endl;
    }
    else if (idade >= 16 && idade < 18){
        cout <<"Eleitor Facultativo" << endl;
    }
    else if(idade >= 65){
        cout <<"Eleitor Facultativo" << endl;
    }



    return 0;
}
