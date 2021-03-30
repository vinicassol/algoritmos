#include <iostream>
using namespace std;
int main()

{
  int valor, soma;
  soma = 0;

  // le e soma valores enquanto usuario nao digitar zero
  cout << "Digite o valor para soma \n";
  cin >> valor;

  while(valor != 0)
  {
    soma = soma + valor;
    cout << "Total: " << soma << "\n" ;
    cout << "Digite o valor para a soma: ";
    cin >> valor;
  }
  
  cout<< "Resultado: " << soma;
}
