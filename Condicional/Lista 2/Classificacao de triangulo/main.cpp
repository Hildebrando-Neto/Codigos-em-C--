#include <iostream>

using namespace std;

int main()
{
    int a, b, c;


    cout <<"Digite os 3 valores desejados: ";
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a){
    cout <<"Nao formam um triangulo" << endl;

        }else{
        if(a == b && a == c)
    cout <<"Tipo equilatero" << endl;

        if(a == b || a == c || b == c)
        cout <<"tipo isosceles" << endl;
        else cout <<"tipo escaleno" << endl;
    }

    return 0;
}
