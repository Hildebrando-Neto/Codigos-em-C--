// Mostra a tabuada de um numero usando for.
#include <iostream>

using namespace std;

int main()
{
    int numero;
    int multi;


    cout <<"Insira um numero: " << endl;
    cin >> numero;

    for(int contador = 1; contador <= 10; contador++){


        multi = contador * numero;
        cout <<" " << numero << " x" <<" " << contador << " =" <<" " << multi << endl;


    }
    return 0;
}
