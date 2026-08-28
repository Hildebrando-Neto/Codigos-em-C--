// Compara valores e toma decisoes com estruturas condicionais.
#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3,media,calc;
    int id;

    cout <<"Numero de id: ";
    cin >> id;

    cout <<"Notas: ";
    cin >> n1 >> n2 >> n3;

    cout <<"Nota media dos exerc: ";
    cin >> media;

    calc = (n1 + n2 * 2 + n3 * 3 + media) / 7;

    cout <<"ID: " << id << endl;
    cout <<"Notas: " << n1 << endl << n2 << endl << n3 << endl;
    cout <<"Media dos exerc: " << media << endl;
    cout <<"Media final: " << calc << endl;

    if(calc >= 9.1 && calc < 10){
        cout <<"Conceito: A " << endl;
        cout <<"APROVADO" << endl;
    }

    if(calc >= 7.6 && calc <= 9.0){
        cout <<"Conceito: B " << endl;
        cout <<"APROVADO" << endl;
    }

    if(calc >= 6.1 && calc <= 7.5){
        cout <<"Conceito: C " << endl;
        cout <<"APROVADO" << endl;
    }

    if(calc >= 4.1 && calc <= 6.0){
        cout <<"Conceito: D " << endl;
        cout <<"REPROVADO" << endl;
    }

    if(calc <= 4.0){
        cout <<"Conceito: E " << endl;
        cout <<"REPROVADO" << endl;
    }





    return 0;
}
