//
//  lista2_ex5.cpp
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
     A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50.
     Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de
     poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono.
     Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.
     */
    
    int qtdPao;
    int qtdBroa;
    
    float valorPao = 0.12;
    float valorBroa = 1.50;
    float total;
    float poupar;
    
    cout << "Informe a quantidade de paes vendidos: ";
    cin >> qtdPao;
    
    cout << "Informe a quantidade de broas vendidas: ";
    cin >> qtdBroa;
    
    total = qtdPao * valorPao + qtdBroa * valorBroa;
    poupar = total * 0.1;
    
    cout << "O faturamento do dia foi: R$ " << total <<". \nVoce deve investir: R$ " << poupar << endl;
    return 0;
}
