#include <iostream>
using namespace std;

//Receba três numeros e imprima em ordem crescente
//Repita ate o usuario informar três numeros iguais

int main() {
  int n1, n2, n3;

  do{
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    if ( n1 <= n2 && n1 <= n3)
    {
        if(n2 < n3)
          cout << "ordem crescente: " << n1 <<", "<< n2 <<", "<< n3 << endl;
        else
          cout << "ordem crescente: " << n1 <<", "<< n3 <<", "<< n2 << endl;
    }
    else if ( n2 <= n1 && n2 <= n3)
    {
          if(n1<n3)
            cout << "ordem crescente: " << n2 <<", "<< n1 <<", "<< n3 << endl;
          else
            cout << "ordem crescente: " << n2 <<", "<< n3 <<", "<< n1 << endl;
    }
    else
    {
      if(n1<=n2)
        cout << "ordem crescente: " << n3 <<", "<< n1 <<", "<< n2 << endl;
      else
        cout << "ordem crescente: " << n3 <<", "<< n2 <<", "<< n1 << endl;
    }
  } while(!(n1 == n2 == n3)); //primeiro, verifica se os 3 numeros sao iguais, e após, nega o resultado. Ou seja, enquanto os 3 NAO forem iguais, irá repetir
}
