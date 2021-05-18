#include <iostream>
using namespace std;

int main() {
  // armazenar a nota de três alunos e calcular a media
  float n1 = 6.1;
  float n2 = 4.0;
  float n3 = 9.8;

  float media = (n1+n2+n3) / 3;

  // E se forem 46 alunos?
  // VETORES!!!! 
  // Em inglês: Arrays

  //<tipo> <nome[tamanho]>
  float     notas[6];

  //acesso é feito a partir de indice iniciado em zero
  //Acessamos as posicoes de zero até o tamanho do vetor -1;
  notas[0] = 6.1;
  notas[1] = 4.0;
  notas[2] = 9.8;
  notas[3] = 7.2;
  notas[4] = 8.4;
  cout << notas[3] << endl;

  //<tipo> <nome[tamanho]> = {<valores>}
  string  nomes[3] = {"Alberta", "Nestor", "Melania"};
  //cout << nomes[2] << endl;

  cout << "Dados do vetor notas: \n";
  for(int i=0; i < 6; i++) // i vai de 0 a 5 (indices do vetor)
    cout << "Pos " << i << ": " << notas[i] << endl;

  //Ler 10 valores inteiros e armazenar no vetor. Após imprimir os dados armazenados;
  /*int valores [10];//vetor de 10 numeros inteiros

  for (int i = 0; i < 10; i ++) // Preenchimento do vetor
  {
    cout<< "Digite um numero:";
    cin >> valores [i];
  }

  cout<< "\nVetor \n";
  for (int i = 0; i < 10; i ++)
  {
    cout << "Posição " << i << " : " << valores[i] << endl;
  }

  //Calcular a media dos 10 valres
  int soma = 0;
  media=0;
  for(int i=0; i<10; i++) //somar os 10 valres
  {
    soma += valores[i]; // soma = soma + valores[i]
  }

  media = soma/10;
  cout << "Media dos valores inseridos: " << media << endl;
 */
  
  string palavra = "Algoritmos"; // String é um vetor de caracteres
  //char p[10] = { 'A', 'l', 'g', 'o', 'r', 'i', 't', 'm', 'o', 's'};

  for (int i =0; i<palavra.size(); i++) // palavra.size() = tamanho do vetor de caracteres
    cout << palavra[i] << endl;

 //EXERCICIO:
 /* Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é tamanho definido para o vetor), armazene cada valor que for sorteado e a o final imprima o percentual do resultado de cada face.
*/
srand(time(0));
int const TAMANHO = 2300;
int vetor[TAMANHO];

int contaFaces[6] = {0, 0, 0, 0, 0, 0}; //contar quantas vezes cada face caiu
/*
Vetor com 6 posições
contaFaces[0] --> Face 1
contaFaces[1] --> Face 2
contaFaces[2] --> Face 3
contaFaces[3] --> Face 4
contaFaces[4] --> face 5
contaFaces[5] --> Face 6
*/

for(int i=0; i<TAMANHO; i++)
{
  vetor[i] = rand()%6 + 1;
  
  //Usando o valor sorteado como base para acessar o indice do vetor que conta a quantidade de vezes que a face foi sorteada
  contaFaces[vetor[i]-1]++;
}

cout << "Valores sorteados:\n";
for(int i=0; i<TAMANHO; i++)
{
  cout << vetor[i] << endl;
}
  
cout << "Quantidade de vezes que cada face foi sorteada: " << endl;
for(int i=0; i< 6; i++)
{
  float perc = contaFaces[i]* 100/ TAMANHO;
  cout << "Face " << i+1 << ": " << contaFaces[i] << " Percentual: " << perc << endl;
}

}

