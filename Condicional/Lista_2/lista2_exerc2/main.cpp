//Código para verificar se os 3 valores formam um triangulo e qual o tipo de triangulo

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;


    cout <<"Digite os 3 valores desejados: ";
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a){
        if(a == b && a == c)
            cout <<"Tipo equilatero" << endl;
        else if(a == b || a == c || b == c)
            cout <<"tipo isosceles" << endl;
        else
            cout <<"tipo escaleno" << endl;
    } else {
        cout <<"Nao formam um triangulo" << endl;
    }

    return 0;
}
