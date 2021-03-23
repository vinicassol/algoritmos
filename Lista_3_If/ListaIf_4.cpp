#include <iostream>
using namespace std;

int main()
{ // inicio
  
  //declaração das variaveis
  int quantidade, codigo;
  double preco;
  bool temItem = false;

  cout << "Informe o codigo do produto e a quantidade desejada: " << endl;
  cin >> codigo;
  cin >> quantidade;

  if(codigo == 6548) // == para comparar
  {
    temItem = true;
    preco = quantidade * 2.37; // = para atribuir novo valor
  }
  else if( codigo == 1324 || codigo == 7623)
  {
    temItem = true;
    preco = quantidade * 6.45;
  }
  else if(codigo == 1001 || codigo == 987)
  {
    temItem = true;
    preco = quantidade * 5.32;
  }
  else
  {
    cout << "O codigo informado eh invalido.\n";
  }

  if(temItem) // mesma coisa: temItem == true
  {
    //cout << "Valor a pagar: " << preco;
    // Valor a pagar: 10.34

    // O valor de 2 unidades do item 1001 eh: 10.64
    cout << "O valor de " << quantidade << " unidades do item " << codigo << " é: " << preco;
  }
}  //fim 
