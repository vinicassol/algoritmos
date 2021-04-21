#include <iostream>
using namespace std;

int main()
{
 int numero;
 int maior;
 int menor;

 for (int i=1; i<=10; i++)
 {
   cout << "Informe o valor " << i<< endl;
   cin >> numero;

   if(i==1) // na primeira passada o unico vovalor vai ser tanto maior como menor
   {
     maior = numero;
     menor = numero;
   }

  if(numero > maior)
    maior = numero;
  if(numero < menor)
    menor = numero;
 }

 cout << "Maior valor digitado: " << maior << endl;
 cout << "Menor valor digitado: " << menor << endl;
}
