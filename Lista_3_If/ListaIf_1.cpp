#include <iostream>
using namespace std;

int main() { // inicio

  int qtd = 0;
  double valorCompra;

  cout << "Quantas macas foram compradas? ";
  cin >> qtd;

  if(qtd < 12)
  {
    valorCompra = qtd * 0.30;
  }
  else
  {
    valorCompra = qtd * 0.25;
  }
  
  cout << "Valor a pagar: " << valorCompra << endl;

  return 0;

} //fim
