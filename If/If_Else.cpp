//
//  Condicional_If.cpp
//  prog1
//
//  Created by Vini Cassol on 06/10/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float nota =0;
    float frequencia = 0;
    
    // Solicite a nota
    cout << "Informe sua nota e a frequencia: " << endl;
    cin >> nota;
    cin >> frequencia;
    
    // Se nota >= 60, aprovado
    if(nota >= 60 && frequencia >=75)
    {
        cout << "Aprovado!\n";
    }
    else //senao, reprovado
    {
        cout << "Você foi reprovado. Motivo: \n" ;
        
        if(frequencia < 75)
            cout << "- Frequencia \n";
        
        if (nota < 60)
        {
            cout << "- Nota \n";
        }
    }
    
    
    return 0;
}
