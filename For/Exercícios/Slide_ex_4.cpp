#include <iostream>
using namespace std;

/* Implemente um programa que mostre na tela os numeros inteiros entre dois numeros lidos do teclado,organizados em linhas com 10 valores em cada
Exemplo:
Valores lidos: 1 - 27
Linhas Impressas:
1 2 3 4 5 6 7 8 9 10 
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27
*/

int main() 
{
  int v1, v2;
  int contaImp = 0;

  cout << "Informe dois valores, sendo o primeiro o menor deles: \n";
  cin >> v1; 
  cin >> v2;

  for(int i = v1 ; i<=v2; i++)
  {   
      cout << i << " ";
      contaImp++;
      if(contaImp == 10)
      {
        cout << endl;
        contaImp = 0;
      }
  }
}
