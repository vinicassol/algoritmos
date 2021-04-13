#include <iostream>
using namespace std;

int main() 
{
  int v1=0, v2=0, v3=0, v4=0, v5=0, v6=0;

  //Srand para definir a semente do rand
  srand(time(0)); // -> time(0) leva em conta o tempo de processamento para a cada execução ter uma seed diferente

  //Rand é a função para sortear valores
  do
  {
    v1 = (rand() % 60) + 1;
    v2 = (rand() % 60) + 1;
    v3 = (rand() % 60) + 1;
    v4 = (rand() % 60) + 1;
    v5 = (rand() % 60) + 1;
    v6 = (rand() % 60) + 1;
  } while (v1==v2 || v2==v3 || v3==v4 || v5==v6 || v1==v3 || v1==v4 || v1==v5 || v5==v6 || v2==v4 || v2==v5 || v2==v6 || v3==v5 || v3==v6 || v4==v5 || v4==v6 || v5==v6);
  

  cout << "O primeiro valor sorteado foi: " << v1 << endl;
  cout << "O segundo valor sorteado foi: " << v2 << endl;
  cout << "O terceiro valor sorteado foi: " << v3 << endl;
  cout << "O quarto valor sorteado foi: " << v4 << endl;
  cout << "O quinto valor sorteado foi: " << v5 << endl;
  cout << "O sexto valor sorteado foi: " << v6 << endl;
}

//1804289383 % 60 = 30071487 -> O Resto desta divisão eh 43