//
//  Lista 1.cpp
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
    Exercicio 1:  Declaração de variaveis
    tipoDado nomeVariavel;
    */
    
    string nome = "Vini"; //um nome
    int idade; // uma idade
    string cpf; //o cpf do usuário
    string data; //uma data de nascimento
    int numVidas; //número de vidas de um personagem
    int qtdSaude; //quantidadade de "saúde” ou “dano” (de um personagem em um jogo)
    bool vivo;          //se o personagem está vivo ou morto
    bool usandoPowerUp; //se o personagem está usando ou não um power-up
    float tamanhoTanque;//capacidade, em litros, de um tanque
    float velocidade;   //velocidade de um carro
    char tipoCarro = 'H';  // se um carro é hatch ('H') ou Sedan ('S')
    char tipoAnimal;    // se um animal é carnívoro ('C'), herbívoro ('H') ou onívoro ('O)
    int numPowerUpds; // número de power ups que o jogador já pegou no jogo
    float forca;      //porcentagem de força que o personagem tem
    float preco;  //preço de um item
    int numItens; // número de itens em uma loja
    bool itemBloqueado; // se um item está bloqueado ou não
    string senha; // uma senha alfa-numérica
    
    //============================================
    
    
    /*Considere um programa que tenha as seguintes variáveis e seus valores
    char a = ‘b’ , b = ‘a’, c = ‘*’;
    Usando o comando cout e apenas as variáveis, mostre como seria feito para imprimir na tela as seguintes saídas:
    a. *
      ***
     *****
    b. ba
    c. ba * ba * ba
     
    */
    char a = 'b' , b = 'a', c = '*';
    
    cout << "  " << c << endl;
    cout << " " << c << c << c << endl;
    cout << c << c << c << c << c << endl << endl;
    
    cout << a << b << endl << endl;
    
    cout<< a << b << " " << c << " " <<  a << b << " " << c << " "<< a << b << endl;

//============================
    /*
     3. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.
     */
    
    float comprimento, largura, area;
    cout << endl << "Insira o tamanho do terreno inserindo respectivamente o comprimento e a largura em metros:" << endl;
    
    cin >> comprimento >> largura;
    
    area = comprimento * largura;
    
    cout << "A área do terreno informado é: " << area << " m²" << endl;
    
    return 0;
}
