//Codigo para exibir a tabuada de um numero usando laco while

#include <iostream>

using namespace std;

int main()
{
    int numero, multi;
    int contador = 1;

    cout <<"Insira um numero: ";
    cin >> numero;


    while(contador <= 10){

        multi = contador * numero;
        cout <<" " << numero <<" x" <<" " << contador << " =" <<" " << multi << endl;
        contador++;

    }

    return 0;
}
