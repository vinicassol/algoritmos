#include <iostream>
using namespace std;

int main()
{
    string nomes[3]; //declarar um vetor para armazenar 3 nomes. O tamanho do vetor é 3 e os indices sao 0, 1, 2;
    string signos[3] = {"Touro", "Sagitario", "Cancer"};
    int contador = 0;
    
    string palavra = "personalidade";
    
    nomes[0] = "Luis";
    nomes[1] = "Karla";
    nomes[2] = "Maria";
    
   /* while(contador < 3)
    {
        cout << nomes[contador] << ", qual seu signo? " << endl;
        cin >> signos[contador];
        contador++;
    }
    */
    
    contador = 0;
    while(contador < 3)
    {
        cout << nomes[contador] << " eh do signo de " << signos[contador] << endl;
        contador++;
    }
    
    contador = 0;
    while(contador < palavra.size())
    {
        cout << palavra[contador] << endl;
        contador++;
    }
}
