#include <iostream>
using namespace std;

int main() {
  int contador = 1;
  int numero = 0;
  int somaNumero = 0;
  double media;
  
  cout << "Digite um numero: ";
  cin >> numero;
  
  while (contador <= numero){
    somaNumero = somaNumero + contador;
    contador ++;
  }
  
  media = somaNumero / numero;
  cout << "Soma de 1 ateh " << numero << " = " << somaNumero << "\n   Media = "<< media << "\n";   
}