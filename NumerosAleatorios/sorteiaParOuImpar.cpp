#include <iostream>
using namespace std;

int main() 
{
  srand(time(0)); 
  int numero = rand()%100 +1; 

  cout << numero << endl;
  if (numero%2 == 0)
  {
    cout << "par";
  }
  else
    cout << "impar";
}
