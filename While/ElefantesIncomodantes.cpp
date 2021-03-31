#include <iostream>
using namespace std;

//Imprimir os numeros de 1 a 10
int main() {
  
  int numero = 2;
  cout << "1 elefante incomoda muita gente\n";
  while( numero <= 10 )
  {
    cout << numero << " elefantes ";
    if(numero % 2 != 0 ) // numero impar
      cout << " incomodam muita gente\n";
    else
    {
      int i = 0;
      while(i < numero)
      {
        cout << " incomodam ";
        if(i < numero -1)
          cout << ", ";
        i++;
      }
       cout << " muito mais\n";
    }
    numero++;
  }
}
