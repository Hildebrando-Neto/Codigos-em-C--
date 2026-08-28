// Calcula o discriminante de uma equacao do segundo grau.
#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float Delta;

    cout.precision(2);

    cout << "Digite o valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    cout << "Digite o valor de C: ";
    cin >> c;

    Delta = b * b - 4 * a * c;

    cout << "Delta = " << Delta << endl;

    return 0;
}
