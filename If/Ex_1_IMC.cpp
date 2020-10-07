//
//  Ex_1_IMC.cpp
//  prog1
//
//  Created by Vini Cassol on 06/10/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float altura, peso;
    float imc;

    cout << "Informe, respectivamente, sua altura e seu peso: " << endl;
    cin >> altura >> peso;

    imc = (peso / pow(altura,2));

    if(imc <= 18.5)
    {
      cout << "Você está abaixo do peso." << endl;
    }
    else if(imc > 18.5 && imc <= 24.9)
    {
      cout << "Você está com o peso normal." << endl;
    }
    else if(imc >= 25 && imc <= 29.9)
    {
      cout << "Você esta acima do peso." << endl;
    }
    else if(imc >= 30)
    {
      cout << "Você está obeso." << endl;
    }

    return 0;
}
