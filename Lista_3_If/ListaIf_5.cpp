//
//  if_5.cpp
//  Algoritmos
//
//  Created by Vinicius Cassol on 20/10/20.
//

#include <iostream>
using namespace std;

int main()
{
    /*
     Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. */

    int i;
    double a, b, c;
    
    cout << "Defina um valor para i - entre 1 e 3: \n";
    cin >> i;
    
    cout << "Defina valores para a, b e c: \n";
    cin >> a >> b >> c;
    
    double maior, menor, meio;
    
    //Descobrir o maior
    if(a > b && a > c)
        maior = a;
    else if( b > c)
        maior = b;
    else
        maior = c;

    // Descobrir o menor
    if(a < b && a < c)
        menor = a;
    else if( b < c)
        menor = b;
    else
        menor = c;
    
    // Descobrir o do meio
    if(a != maior && a != menor)
        meio = a;
    else if(b != maior && b != menor)
        meio = b;
    else
        meio = c;
    
    if(i == 1) //Se i=1 escrever os três valores a, b, c em ordem crescente.
    {
        cout << menor << " - " << meio << " - " << maior << endl;
    }
    else if (i == 2) //Se i=2 escrever os três valores a, b, c em ordem decrescente.
    {
        cout << maior << " - " << meio << " - " << menor << endl;
    }
    else if (i==3)// Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois
    {
        cout << menor << " - " << maior << " - " << meio << endl;
    }
    else
    {
        cout << "Opcao nao mapeada para i\n";
    }
    return 0;
}
