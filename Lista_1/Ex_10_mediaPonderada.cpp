//
//  10_mediaPonderada.cpp
//  prog1
//
//  Created by Vini Cassol on 29/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
   /*
    Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).
    
    */
    
    float n1, n2, n3;
    int p1 = 1, p2=2, p3 = 3;
    float media;
    
    cout << "Informe as tres notas: \n";
    cin >> n1 >> n2 >> n3;
    
    media = (n1*p1 + n2*p2 + n3 * p3) / (p1+p2+p3);
    
    cout << "A media ponderada eh: " << media << endl;
    
    
    return 0;
}
