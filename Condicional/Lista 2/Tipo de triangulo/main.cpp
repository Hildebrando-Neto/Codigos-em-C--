#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout <<"Digite os valores de cada lado: ";
    cin >> a >> b >> c;

        if(a == b && a == c){
            cout <<"Equilatero" << endl;
        }else{
            if(a == b || a == c || b == c)
                cout <<"Isosceles" << endl;

        else cout <<"Escaleno" << endl;

    }

    return 0;
}
