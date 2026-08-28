// Verifica se um numero inteiro e primo usando repeticao.
#include <iostream>

using namespace std;

int main()
{

    int num;
    int i = 2;
    int resultado = 0;

    cout <<"Insira um numero inteiro: ";
    cin >> num;

    do{
        if(num % i == 0){
            resultado++;
        }


    i++;
}

    while(i <= num / 2);

        if(resultado == 0){
        cout <<"O numero e primo" << endl;
    }


    if(i == 0){
        cout<<"Numero Primo." << endl;
    }
    else{
        cout <<"Não é numero primo." << endl;
    }


    return 0;
}
