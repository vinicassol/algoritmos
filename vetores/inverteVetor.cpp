//
//  inverteVetor.cpp
//  Prog1
//
//  Created by Vinicius Cassol on 28/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    const int tamanho = 20;
    int vetorOriginal[tamanho], vetorInvertido[tamanho];
    int cont = 0;
    
    //Preenchendo o vetor
    while (cont < tamanho)
    {
        cout << " Digite um valor: ";
        cin >> vetorOriginal[cont];
        cont++;
    }

    //inversao de posicoes
    cont = 0;
    while (cont < tamanho)
    {
        vetorInvertido[cont] = vetorOriginal[tamanho -1 - cont]; // tamanho -1 - cont: decresce de 19 ateh 0
        cont++;
    }
    
    //imprimir o vetor invertido
    cont = 0;
    while (cont < tamanho)
    {
        cout << "\n Resultado POS[" << cont << "]: " << vetorInvertido[cont] << endl;
        cont++;
    }
}
