#include <iostream>
using namespace std;

//Matriz inventario para armazenar itens de um jogo
int main() {
  
  //Declaração da Matriz com 4 linhas e 10 colunas
  // Indice das linhas: 0 a 3
  // Indice das Colunas: 0 a 10
  string inventario[4][10];
   
  //Preencher a Matriz
  inventario[0][0] = "Gold";
  inventario[1][0] = "Gold";
  inventario[2][0] = "Gold";
  inventario[3][0] = "Gold";
  inventario[3][5] = "Gold";
  inventario[3][6] = "Gold";
  inventario[3][7] = "Gold";
  inventario[2][8] = "Anel";
  inventario[2][9] = "Anel";
  inventario[3][8] = "Anel";
  inventario[3][9] = "Anel";
  inventario[3][1] = "Elixir";
  inventario[3][2] = "P.Mana";
  inventario[3][3] = "P.Vida";
  inventario[2][1] = "Espada1-Cabo";
  inventario[1][1] = "Espada1-Lamina";
  inventario[0][1] = "Espada1-Ponto";
  inventario[2][2] = "Espada2-Cabo";
  inventario[1][2] = "Espada2-Lamina";
  inventario[0][2] = "Espada2-Ponto";
  inventario[2][3] = "Espada3-Cabo";
  inventario[1][3] = "Espada3-Lamina";
  inventario[0][3] = "Espada3-Ponta";
  inventario[2][4] = "Espada4-Cabo";
  inventario[1][4] = "Espada4-Lamina";
  inventario[0][4] = "Espada4-Ponta";
  inventario[0][6] = "Armadura-p1";
  inventario[1][6] = "Armadura-p2";
  inventario[2][6] = "Armadura-p3";
  inventario[0][7] = "Armadura-p4";
  inventario[1][7] = "Armadura-p5";
  inventario[2][7] = "Armadura-p6";
  inventario[0][8] = "Cinturao-p1";
  inventario[0][9] = "Cinturao-p2";
  inventario[1][8] = "Cinturao-p3";
  inventario[1][9] = "Cinturao-p4";
  inventario[3][4] = "Pergaminho";
  inventario[2][5] = "Espada5-Cabo";
  inventario[1][5] = "Espada5-Lamina";
  inventario[0][5] = "Espada5-Ponta";

  for(int i=0; i < 4; i++) // Percorre todas as linhas
  {
    for(int j=0; j < 10; j++) //Percorre todas as colunas
    {
      cout << inventario[i][j];

      if(j<9)
        cout <<  " - ";
    }
    cout << endl;
  }

  int linha, coluna;
  char resposta;

  cout << "Informe a linha e coluna desejada: ";
  cin >> linha >> coluna;
  cout << "Nesta posicao temos: " << inventario[linha][coluna] << endl;
  cout << "Quer usar? (s/n)";
  cin >> resposta;

  if(resposta == 's')
    inventario[linha][coluna] = "VAZIO";

  for(int i=0; i < 4; i++) // Percorre todas as linhas
  {
    for(int j=0; j < 10; j++) //Percorre todas as colunas
    {
      cout << inventario[i][j];

      if(j<9)
        cout <<  " - ";
    }
    cout << endl;
  }
}