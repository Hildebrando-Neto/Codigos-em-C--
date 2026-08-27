//Código para calcular as raizes de uma equação do segundo grau

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float coeA, coeB, coeC;
    float delta;
    float x1,x2;

             //SISTEMA DE REPETIÇAO//
    for(int contador = 0; contador < 5; contador++){

    cout <<"Digite o coeficiente A: ";
    cin >> coeA;

    cout <<"Digite o coeficiente B: ";
    cin >> coeB;

    cout <<"Digite o coeficiente C: ";
    cin >> coeC;

    delta = coeB * coeB - 4 * coeA * coeC;


    //SOLUÇAO FEITA COM CONDICIONAL SIMPLES//

    /* if(delta < 0){

        cout <<"Raizes imaginarias" << endl;
    }
    if(delta == 0){

        x1 = coeB * -1 / 2 * coeA;
        cout <<"Raizes Unicas" << x1 << endl;
    }

    if(delta > 0){

        x1 = (coeB * -1) + sqrt(delta) / 2 * coeA;
        x2 = (coeB * -1) - sqrt(delta) / 2 * coeA;
        cout <<"Raizes Distintas " << x1 << " e " << x2 << endl;
    }
    */


    //SOLUÇAO CONDICIONAL COMPOSTA (ANINHADA OU ENCADEADA)//

    if(delta < 0) cout <<"Raizes Imaginarias" << endl;

    else{
        if(delta == 0){

            x1 = coeB * -1 / 2 * coeA;
            cout <<"Raizes Unicas" << x1 << endl;
        }
        if(delta > 0){
            x1 = (coeB * -1) + sqrt(delta) / 2 * coeA;
            x2 = (coeB * -1) - sqrt(delta) / 2 * coeA;
            cout <<"Raizes Distintas " << x1 << " e " << x2 << endl;

        }
    }
}

    return 0;
}
