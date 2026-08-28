// Mostra a tabuada de um numero usando do-while.
#include <iostream>

using namespace std;

int main()
{
    int contador = 1;
    int multi, numero;

    cout <<"Insira um numero: ";
    cin >> numero;

    do{
        multi = contador * numero;
        cout <<" " << numero <<" x" <<" " << contador << " =" <<" " << multi << endl;
        contador++;

    }
    while(contador <= 10);

    return 0;
}
