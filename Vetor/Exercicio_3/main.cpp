//Codigo para gerar um vetor com numeros aleatorios e exibir em ordem inversa

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    const int tam = 10;
    int array [tam];

    for( int pos = 0; pos < tam; pos++){

        array[pos] = rand() % 2;
    }

    cout <<"Array = {";

    for(int pos = tam - 1; pos >= 0; pos--){

        cout << array[pos] << ",";
    }
    cout <<"}" << endl;



    return 0;
}
