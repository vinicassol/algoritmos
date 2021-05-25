#include <iostream>
using namespace std;

int soma2(int valor1, int valor2);
void imprimeVetor(int vetor[], int tamanho);

int main() {
  //Faça um algoritmo que some o conteúdo de dois vetores e armazene o resultado em um terceiro vetor. 
  int vetor1[5]; //0, 1, 2, 3, 4
  int vetor2[5];
  int vetor3[5];

  //Definir os dados dos vetores 1 e 2
  for (int i=0; i < 5; i++)
  {
    cout << "Informe um valor para a posição " << i << " dos vetores.\n";
    cout << "Vetor 1: ";
    cin >> vetor1[i];
    
    cout << "Vetor 2: " ;
    cin >> vetor2[i];
  }

  cout << "Dados do Vetor 1: \n";
  imprimeVetor(vetor1, 5);
  
  cout << "\nDados do Vetor 2: \n";
  imprimeVetor(vetor2, 5);

  // Percorrer os dois vetores e somar os elementos de mesmo indice. Armazenar a soma, no terceiro vetor
  for(int i=0; i<5; i++)
  {
    vetor3[i] = soma2(vetor1[i], vetor2[i]);
  }

  cout << "\nDados do Vetor 3: \n";
  imprimeVetor(vetor3, 5);

  return 0;
}

int soma2(int valor1, int valor2)
{
  return valor1 + valor2;
}

void imprimeVetor(int vetor[], int tamanho)
{
  for(int i=0; i < tamanho; i++)
  {
    cout << vetor[i] << endl;
  }
}
