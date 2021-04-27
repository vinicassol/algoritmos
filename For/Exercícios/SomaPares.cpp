#include <iostream>
using namespace std;

//Faça  um  algoritmo  que  imprima  todos  os  números  pares  compreendidos  entre  85 e 907 e calcule a soma dos valores impressos 
int main() 
{
	int inicio = 85, fim = 907, soma=0;
	for(int cont = inicio; cont <= fim; cont ++)
	{		
		if(cont % 2 == 0)
		{
			soma += cont;
			cout << cont << " é par" << endl;
		}
	}
	cout << "A soma é " << soma;
}
