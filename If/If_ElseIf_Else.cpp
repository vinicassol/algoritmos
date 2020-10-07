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
    
    
    // Solicite a nota
    cout << "Informe sua nota: " << endl;
    cin >> nota;
    
    if(nota >=90)
    {
        cout << "Conceito A\n" ;
    }
    else if(nota >=80)
    {
        cout << "Conceito B\n";
    }
    else if (nota >=70)
    {
        cout << "Conceito C\n";
    }
    else if (nota >= 60)
    {
        cout << "Conceito D\n";
    }
    else
    {
        cout << "Conceito E\n";
    }
    
    
    return 0;
}

