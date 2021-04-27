#include <iostream>
using namespace std;

//Some os números de 1 a 100 e imprima o valor. 
int main() 
{
  int soma = 0;

  for(int i=1; i<=100; i++)
  {
    soma += i; // soma = soma + i;
  }
  
  cout << "A soma dos numeros entre 1 e 100 eh " << soma << endl;
}

//Mesmo programa com while
/*
int contador =1;
int soma = 0;

while (contador <=100)
{
  soma += contador;
  contador++;
}
cout << "A soma dos numeros entre 1 e 100 eh " << soma << endl;
*/
