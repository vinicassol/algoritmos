//
//  ex_9.cpp
//  prog1
//
//  Created by Vini Cassol on 29/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 Entrar com o dia e o mês de uma data e
 informar quantos dias se passaram desde o início do
 ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.
 */

int main()
{
    int dia;
    int mes;
    int qtdDias;
    
    cout << "Informe (em numeros) um dia e, em seguida, um mes: \n";
    cin >> dia;
    cin >> mes;
    
    qtdDias = (mes-1) * 30 + (dia-1);
    
    cout << "Desde o inicio do ano, se passaram " << qtdDias << " dias ateh a data informada\n";
    
    return 0;
}
