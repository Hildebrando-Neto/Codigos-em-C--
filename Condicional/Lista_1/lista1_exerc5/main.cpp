//Código para calcular o peso ideal de uma pessoa

#include <iostream>

using namespace std;

int main()
{
    string sexo;
    float altura = 0.0, ideal = 0.0;

    cout <<"Digite seu sexo: ";
    cin >> sexo;

    cout <<"Digite sua altura: ";
    cin >> altura;

    if(sexo == "masculino"){
        ideal = (72.7 * altura - 58);
        cout <<"Seu peso ideal e: " << ideal << endl;
    }

    if(sexo == "feminino"){
        ideal = (62.1 * altura - 44.7);
        cout <<"Seu peso ideal é: " << ideal << endl;
    }


    return 0;

}
