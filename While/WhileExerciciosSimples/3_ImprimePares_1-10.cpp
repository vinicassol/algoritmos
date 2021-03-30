#include <iostream>
using namespace std;

//Imprimir os numeros pares de 1 a 10
int main() {
  
  int numero = 1;

  while (numero <= 10)
  {
    if(numero % 2 == 0) 
      cout << numero << endl;

    numero++;
  }

}