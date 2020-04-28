//
//  palindromo.cpp
//  Prog1
//  Verificar se uma palavra é um palindromo.

//  Created by Vinicius Cassol on 28/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include<iostream>
using namespace std;

bool palindromo(string palavra)
{
    int contador = 0;
    
    while(contador < palavra.size()/2)
    {
        if(palavra[contador] != palavra[palavra.size() - 1 - contador])
            return false;
        
        contador++;
    }
    return true;
}

int main()
{
    if (palindromo("arara"))
        cout << "Sim, eh palindromo\n";
    else
        cout << "Nao, nao eh palindromo\n";
    
    return 0;
}
