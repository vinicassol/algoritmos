#include <iostream>
using namespace std;

int main() 
{
  int n;

  cout << "Insira um número para converter em mês: ";
  cin >> n;

  switch (n)
  {
    case 1:
      cout << "Você selecionou o mês de Janeiro.";
    break;
    case 2:
      cout << "Você selecionou o mês de Fevereiro.";
    break;
    case 3:
      cout << "Você selecionou o mês de Março.";
    break;
    case 4:
      cout << "Você selecionou o mês de Abril.";
    break;
    case 5:
      cout << "Você selecionou o mês de Maio.";
    break;
    case 6:
      cout << "Você selecionou o mês de Junho.";
    break;
    case 7:
      cout << "Você selecionou o mês de Julho.";
    break;
    case 8:
      cout << "Você selecionou o mês de Agosto.";
    break;
    case 9:
      cout << "Você selecionou o mês de Setembro.";
    break;
    case 10:
      cout << "Você selecionou o mês de Outubro.";
    break;
    case 11:
      cout << "Você selecionou o mês de Novembro.";
    break;
    case 12:
      cout << "Você selecionou o mês de Dezembro.";
    break;
    default:
      cout << "Você selecionou um mês inválido.";
  }
}
