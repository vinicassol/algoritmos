#include <iostream>
using namespace std;

// Ler 10 valores
// Contar quantos sao positivos, negativos e neutros (0)
int main()

{
    int num;
    int contador = 0;
    int positivos = 0, negativos = 0, neutros = 0;

    while (contador < 10)
    {
    cout << "Informe um numero inteiro: ";
    cin >> num2;

    if (num2 <0)
    {
        negativos ++;
    }
    else if(num2 > 0)
    {
        positivos ++;
    }
    else
    {
        neutros ++;
    }
    contador ++;
    }
  
  cout << "Os números digitados foram: \n";
  cout << "Positivos: " << positivo << "\n";
  cout << "Negativos: " << negativo << "\n";
  cout << "Neutros: " << neutro << "\n";
}
