#include <iostream>
using namespace std;

int main() {
  // Para fazer um D20:
  // Algoritmo que gere um numero entre 1 e 20.

  //Numeros randomicos
  //Definicao da seed
  srand(time(0)); //seed -> time pega o tempo de processamento para ser dinamico. Podemos usar seeds fixas.

  //retorna numeros entre 0 e o maior numero inteiro
  int numero = rand()%20 +1;//gera numeros entre 0 e 19
  int outroNumero = rand()%20 +1;
  int maisUmNumero = rand()%20 +1;
  
  cout << numero << endl;
  cout << outroNumero << endl;
  cout << maisUmNumero << endl;
}
