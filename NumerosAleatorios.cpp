//
//  Rand.cpp
//  Algoritmos
//
//  Created by Vinicius Cassol on 20/10/20.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int semente = time(0);
    srand(semente);
    
    int dado = rand()%6+1; // 0, 1, 2, 3, 4, 5
    int dado2 = rand()%6+1;
    
    cout << "Valor Sorteado: " << dado << endl;
    cout << "Valor Sorteado: " << dado2 << endl;
    
    cout << " Valor sorteado entre -2 e 2: " << rand()%5 - 2 << endl;
}
