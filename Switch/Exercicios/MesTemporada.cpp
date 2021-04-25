#include <iostream>
using namespace std;

int main() 
{
  int mes = 1;

  while (mes != 0) {
    cout << endl << "Informe um mês de 1 a 12 para verificar a temporada. Digite 0 para sair. ";
    cin >> mes;

    switch (mes) {
      case 12:
      case 1:
      case 2:
      case 6:
      case 7:
        cout << "O mês é de alta temporada!" << endl;
      break;
      
      case 3:
      case 4:
      case 5:
      case 8:
      case 9:
      case 10:
      case 11:
        cout << "O mês é de baixa temporada!" << endl;
      break;
    
      case 0:
        cout << "Vocês escolheu sair. " << endl;
      break;

      default:
      cout << "Número inválido" << endl;
    }
  }
  return 0;
}
