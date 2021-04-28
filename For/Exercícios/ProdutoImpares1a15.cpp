#include <iostream>
#include <iomanip> 
using namespace std; 

//Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e, então, exiba os resultados.

int main() {

  int num, produto = 1; 

  cout << " Algoritmo ''PRODUTO DOS NÚMEROS ÍMPARES DE 1 A 15:'' \n"; 
  for (num=1; num <=15; num++)
  {
    if ( num%2 !=0)
    {
      cout << produto << " x " << num << " = " << produto * num << endl; 
      produto*=num;
    } 
 }
 cout << "O produto dos numeros impares de 1 a 15 é: " << produto << endl;
 return 0; 
}
