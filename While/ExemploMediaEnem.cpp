#include <iostream>
using namespace std;

//Fazer um programa que calcule a Media do Enem
int main() {

  string nome;
  float cienciasNatureza;
  float cienciasHumanas;
  float matematica;
  float linguagens;
  int redacao;
  char resposta = 's';
  float notaEnem = 0;

  while(resposta == 's' || resposta == 'S') // Controla pessoas diferentes
  {
    cout << "Qual o seu nome?\n";
    cin >> nome;

    /*cout << "Qual a nota em Ciencias da Natureza?\n";
    cin >> cienciasNatureza;

    cout << "Qual a nota em Ciencias Humanas?\n";
    cin >> cienciasHumanas;

    cout << "Qual a nota em Matematica?\n";
    cin >> matematica;

    cout << "Qual a nota em Linguagens?\n";
    cin >> linguagens;

    cout << "Qual a nota na redacao?\n";
    cin >> redacao;

    notaEnem = (cienciasNatureza + cienciasHumanas + matematica + linguagens + redacao) / 5;
    */
    int numNotas = 0;
    float nota;

    while(numNotas < 5)// vai de zero a 4 -> 5 notas para cada pessoas
    {
      cout << "Informe a nota da prova " << numNotas+1 <<": "; 
      cin >> nota;

      notaEnem += nota;

      //variavel condicional while
      numNotas++;
    }

    notaEnem = notaEnem / 5;

    cout << nome << ", sua nota no Enem eh: " << notaEnem << endl;

    //Verificar a condicao de repeticao
    cout << "Deseja conferir a media de outra pessoa? (S/N)";
    cin >> resposta;

  }
  
}