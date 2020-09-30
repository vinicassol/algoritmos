//
//  13_dias_meses_anos.cpp
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
 Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias.
 Faça um algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.
 */
    
    int totDias;
    
    int qtdAnos, qtdMeses, qtdDias;
    
    cout << "Informe a quantidade de dias sem acidentes ";
    cin >> totDias;
    
    qtdAnos = totDias/365;
    
    qtdMeses = (totDias - qtdAnos*365) / 30;
    
    qtdDias = (totDias - qtdAnos*365)  - qtdMeses * 30;
    
    //1065
    cout << "Anos " << qtdAnos << endl;
    cout << "Meses " << qtdMeses << endl;
    cout << "Dias " << qtdDias << endl;
}
