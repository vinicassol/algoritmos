#include <iostream>
using namespace std;

int main() 
{
  int dia;
  cout << "Digite o dia (1 a 7): "<< endl;
  cin >> dia;
 
  switch (semana)
  {
    case 1:
    case 7:
      cout << "Fim de semana" << endl;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      cout << "Dia util" << endl;
    break;
  }
}
