//
//  Ex_2_Salario.cpp
//  prog1
//
//  Created by Vini Cassol on 06/10/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float salario;
    float novoSalario;
    
    cout << endl << "Insira o valor do salario: ";
    cin >> salario;
    
    if (salario > 0 && salario < 500)
    {
        novoSalario = salario + salario * 0.3;
    }
    else if (salario >= 500 && salario < 2000)
    {
        novoSalario =  salario + salario * 0.2;
    }
    else
    {
        novoSalario =  salario + salario * 0.1;
    }
    
    cout << "Novo salario: " << novoSalario << endl;
    
}
