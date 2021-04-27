#include <iostream>
#include <math.h>
using namespace std;

//Uma rainha  requisitou os  serviços de  um monge  e disse-lhe que  pagaria qualquer preço.  
//O monge, necessitando  de alimentos, indagou  à rainha  sobre o pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de xadrez 
//(que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro anterior. 
//Crie um algoritmo para calcular o total de grãos que o monge recebeu. 
//Resposta: 18 446 700 000 000 000 000 (18 quintilhoes, 446 quatrilhoes e 700 trilhoes de graos)

int main() 
{
  double soma=1, total =0;

  //Resolvendo no modo raiz:
  /*cout<< "Na casa 1 tem "<< soma << " grãos " << endl;
  for (int i = 2; i <=64; i++)
  {
    soma = soma *2;
    total += soma; 
    cout<< "Na casa "<<i << " tem "<< soma << " grãos " << endl;
  }*/

  //Resolvendo com PG
  for(int i=0; i<64;  i++)
  {
    double graosNaCasa = pow(2,i);
    total += graosNaCasa;
    cout << "Casa " << i+1 << ": " << graosNaCasa << endl;
  }
  cout << "O total de grãos é: " << total;
}
