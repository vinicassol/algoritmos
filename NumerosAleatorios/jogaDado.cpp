#include <iostream>
using namespace std;

int main() {

  srand(time(0)); //seed -> time pega o tempo de processamento para ser dinamico. Podemos usar seeds fixas.

  int numVezes;
  int contador = 1;

  cout << "Quantas vezes vc quer jogar o dado? ";
  cin >> numVezes;

  while(contador <= numVezes)
  {
    int numero = rand()%20 +1;//gera numeros entre 0 e 19  
    cout << "Jogada " << contador <<": "<< numero << endl;
    contador++;
  }

  return 0;
}
