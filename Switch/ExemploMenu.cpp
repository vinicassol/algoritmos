#include <iostream>
using namespace std;

int main() 
{
  char op;
  while(op!='S' && op!='s')
  {
    cout << "(N)ovo Registro\n";
    cout << "(C)onsultar\n";
    cout << "(S)air\n";
    cout << "Informe o que deseja: ";
    cin >> op;
    switch(op) // testar os valores da variavel op
      {
        case 'N':
        case 'n':
          cout << "Escolheu novo registro!\n";
        break;

        case 'C':
        case 'c':
          cout << "Escolheu consultar!\n";
        break;

        case 'S':
        case 's':
          cout << "Escolheu sair :( \n";
        break;
        
        default:
          cout << "Escolha invalida";
      }
  } 
}