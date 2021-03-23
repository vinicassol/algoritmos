#include <iostream>
using namespace std;

int main() { //inicio

  //Declarar Variaveis
  int blusas, novelos;
  double novelosPorBlusa;

  cout << "Informe a quantidade de blusas: ";
  cin >> blusas;

  cout << "Quantos novelos forma gastos? ";
  cin >> novelos;

  novelosPorBlusa = (double)novelos / (double)blusas;

  cout << "A quantidade de novelos para fazer uma blusa eh " << novelosPorBlusa << endl;


}//fim
