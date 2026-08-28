// Resolve um problema usando estruturas condicionais.
#include <iostream>

using namespace std;

int main()
{
    string sexo;
    string masculino, feminino;
    float altura = 0.0, ideal = 0.0, idealMulher;

    cout <<"Digite seu sexo: ";
    cin >> sexo;

    cout <<"Digite sua altura: ";
    cin >> altura;

    if(sexo == "masculino"){
        ideal = (72.7 * altura - 58);
        cout <<"Seu peso ideal e: " << ideal << endl;
    }

    if(sexo == "feminino"){
        idealMulher = (62.1 * altura - 44.7);
        cout <<"Seu peso ideal e: " << idealMulher << endl;
    }


    return 0;

}
