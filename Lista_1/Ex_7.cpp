//
//  ex_7.cpp
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
     Um motorista deseja colocar no seu tanque X reais de gasolina.
     Escreva um algoritmo para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar
     no tanque.
     */
    
    float valorLitro;
    float valorPago;
    float qtde;
    
    cout << "Informe o valor de um litro de gasosa: ";
    cin >> valorLitro;
    
    cout << "Informe o valor de abastecimento: ";
    cin >> valorPago;
    
    qtde = valorPago / valorLitro;
    
    cout << "Quantidade de litros abastecidos: " << qtde << endl;
    
    
    return 0;
}
