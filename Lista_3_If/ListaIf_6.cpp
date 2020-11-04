//
//  if_6.cpp
//  Algoritmos
//
//  Created by Vinicius Cassol on 20/10/20.
//

#include <iostream>
using namespace std;

//criar um tipo de dado proprio

//TAD -> Tipos de dados abstratos
struct GPS
{
    float latitude;
    float longitude;
};

struct Corretor{
    string nome;
    double valorVendas;
    double comissao;
    GPS position;
};



double CalculaComissao(double valorVenda)
{
    double comissaoCalculada = 0;
    
    if(valorVenda > 50000)
        comissaoCalculada= valorVenda*0.12;
    else if(valorVenda > 30000)
        comissaoCalculada = valorVenda* 0.095;
    else
        comissaoCalculada = valorVenda * 0.07;
    
    return comissaoCalculada;
}

int main()
{
    /*
     Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão
     calculada de acordo com o valor de suas vendas.
     Se o valor da venda de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido.
     Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
     Escreva um algoritmo que gere um relatório contendo nome, valor da venda e comissão de cada um dos corretores. O relatório deve mostrar também o total de vendas da empresa.
     */
    
    Corretor corretor1, corretor2, corretor3;
    
    corretor1.nome = "Bernardo";
    corretor1.valorVendas = 80000;
    corretor1.comissao = 0;
    corretor1.position.latitude = 234.984;
    corretor1.position.longitude = 8745.9845;
    
    corretor2.nome = "Karla";
    corretor2.valorVendas = 39000;
    corretor2.comissao = 0;
    
    corretor3.nome = "Henrique";
    corretor3.valorVendas = 20000;
    corretor3.comissao = 0;


    corretor1.comissao = CalculaComissao( corretor1.valorVendas);
    corretor2.comissao = CalculaComissao( corretor2.valorVendas);
    corretor3.comissao = CalculaComissao( corretor3.valorVendas);
    
    cout << " ====  Relatorio - Corretor, Venda, Comissao ==== \n\n";
    cout << corretor1.nome << " - " << corretor1.valorVendas << " - "  << corretor1.comissao << endl;
    cout << corretor2.nome << " - " << corretor2.valorVendas << " - "  << corretor2.comissao << endl;
    cout << corretor3.nome << " - " << corretor3.valorVendas<< " - "  << corretor3.comissao << endl;
    
    return 0;
    
}
