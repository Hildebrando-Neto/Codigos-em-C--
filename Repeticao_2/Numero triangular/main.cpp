// Verifica se um numero e triangular usando repeticao.
#include <iostream>

using namespace std;

int main()
{
   int num = 0;
   int i = 1;

   cout <<"Insira um numero: ";
   cin >> num;


   while (i * (i + 1) * (i + 2) < num){
       i++;
}
   if (i * (i + 1) * (i + 2) == num){
       cout <<"Numero Triangular." << endl;
   }

   else{
       cout <<"Número não Triangular." << endl;
   }








    return 0;
}
