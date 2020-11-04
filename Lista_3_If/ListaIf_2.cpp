#include <iostream>
using namespace std;

/*
 Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
 */
int main() {
    
    //Declarar as variaveis
    int valor1, valor2, valor3;
    
    // Ler as variaveis
    cout << "Informe 3 valores inteiros: ";
    cin >> valor1;
    cin >> valor2;
    cin >> valor3;
    
    cout << "\n\n Valores informados: " << valor1 << ", " << valor2 << " e " << valor3 << endl;
   
    // Validar os valores
    if(valor1 == valor2 && valor2 == valor3)
    {
        cout << "Os três valores são iguais\n";
    }
    else
    {
        // Descobrir a maior
        if(valor1 > valor2 && valor1 > valor3)  // primeira variavel eh a maior
        {
            cout << "O primeiro valor informado é o maior!\n";
        }
        
        else if (valor2 > valor3) // ou a segunda eh a maior
        {
            cout << "O segundo valor informado é o maior!\n";
        }
        
        else
        {
            cout << "O terceiro valor informado é o maior!\n";
        }
    }

}
