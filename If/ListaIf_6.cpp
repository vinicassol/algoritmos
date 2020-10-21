//
//  if_6.cpp
//  Algoritmos
//
//  Created by Vinicius Cassol on 20/10/20.
//

#include <iostream>
using namespace std;

int main()
{
    /*
     Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão
     calculada de acordo com o valor de suas vendas.
     Se o valor da venda de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido.
     Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
     Escreva um algoritmo que gere um relatório contendo nome, valor da venda e comissão de cada um dos corretores. O relatório deve mostrar também o total de vendas da empresa.
     */
    
    string corretor1 = "Bernardo", corretor2 = "Karla", corretor3 = "Henrique";
    double vendaC1 = 80000, vendaC2 = 39000, vendaC3 = 20000;
    double comissao1 = 0, comissao2 = 0, comissao3 = 0;
    double totalVendas;
    
    //Calcula comissao 1
    if(vendaC1 > 50000)
        comissao1 = vendaC1*0.12;
    else if(vendaC1 > 30000)
        comissao1 = vendaC1 * 0.095;
    else
        comissao1 = vendaC1 * 0.07;
    
    //Calcula comissao 2
    if(vendaC2 > 50000)
        comissao2 = vendaC2*0.12;
    else if(vendaC1 > 30000)
        comissao2 = vendaC2 * 0.095;
    else
        comissao2 = vendaC2 * 0.07;
    
    //Calcula comissao 3
    if(vendaC3 > 50000)
        comissao3 = vendaC3*0.12;
    else if(vendaC3 > 30000)
        comissao3 = vendaC3 * 0.095;
    else
        comissao3 = vendaC3 * 0.07;
    
    cout << " ====  Relatorio - Corretor, Venda, Comissao ==== \n\n";
    cout << corretor1 << " - " << vendaC1 << " - "  << comissao1 << endl;
    cout << corretor2 << " - " << vendaC2 << " - "  << comissao2 << endl;
    cout << corretor3 << " - " << vendaC3 << " - "  << comissao3 << endl;
    
    return 0;
    
}
