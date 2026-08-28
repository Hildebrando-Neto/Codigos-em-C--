// Converte uma duracao em segundos para horas, minutos e segundos.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int minutos = 0;
    int horas;
    int segundosM = 0;
    int segundos = 0;


    cout << "Digite a duracao do evento em segundos: ";
    cin >> segundosM;

    horas = (segundosM / 3600);

    minutos = (segundosM % 3600) / 60;

    segundos = (segundosM % 3600) % 60;






    cout <<"A duracao do evento foi de: " << horas, cout << " horas", cout << " " << minutos, cout << " minutos";

    cout << " " << segundos, cout << " segundos";





  return 0;



}
