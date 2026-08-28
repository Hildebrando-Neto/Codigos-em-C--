// Le um vetor e mostra seus elementos em ordem inversa.
#include <iostream>

using namespace std;

int main()
{
    const int tam = 10;
    int array [tam];

    for( int pos = 0; pos < tam; pos++){

        cout << "Array["<< pos <<"]=";
        cin >> array[pos];
    }

    cout <<"Array = {";

    for(int pos = tam - 1; pos >= 0; pos--){

        cout << array[pos] << ",";
    }
    cout <<"}" << endl;



    return 0;
}
