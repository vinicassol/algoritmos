#include <iostream>
using namespace std;

int main()
{
    /*
     O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
     Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
     */
    
    float CustoFabrica, valorDistribuidor, impostos;
    float percDist = 0.28, perImpostos = 0.45;
    float custoFinal;
    
    cout << "Insira o valor de custo de fábrica do carro em R$: ";
    cin >> CustoFabrica;
    
    valorDistribuidor = CustoFabrica * percDist;
    impostos = CustoFabrica * perImpostos;
    
    custoFinal = CustoFabrica + valorDistribuidor + impostos;
    
    cout << " Valor Final: " << custoFinal << endl;
    
    return 0;
}
