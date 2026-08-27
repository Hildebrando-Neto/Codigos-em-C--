//Codigo para verificar se um numero e primo

#include <iostream>

using namespace std;

int main()
{

    int num;
    int i = 2;
    bool ehPrimo = true;

    cout <<"Insira um numero inteiro: ";
    cin >> num;

    if (num < 2) {
        ehPrimo = false;
    }
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                ehPrimo = false;
                break;
            }
        }
    }

    if(ehPrimo){
        cout <<"O numero e primo." << endl;
    }
    else{
        cout <<"Não é numero primo." << endl;
    }

    return 0;
}
