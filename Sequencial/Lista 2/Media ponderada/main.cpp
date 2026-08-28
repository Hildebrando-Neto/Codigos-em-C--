// Calcula uma media ponderada de tres notas.
#include <iostream>

using namespace std;

int main()
{
    float n1 = 0.0;
    float n2 = 0.0;
    float n3 = 0.0;
    int p1;
    int p2;
    int p3;
    float media;

    cout.precision(2);

    cout <<"Digite suas notas:";
    cin >> n1 >> n2 >> n3;

    p1 = 2;
    p2 = 3;
    p3 = 5;

    media = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);

    cout << "A sua media final e: " << media << endl;


    return 0;
}
