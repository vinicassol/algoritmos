//
//  matriz.cpp
//  prog1
//
//  Created by Vini Cassol on 02/06/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

#define NRO_ESTUDANTES 5
#define NRO_NOTAS 3



void notasEstudantes()
{
    int dados[NRO_ESTUDANTES][NRO_NOTAS];
    
    // Ler as notas de cada aluno e armazenar na matriz
    for (int e=0; e<NRO_ESTUDANTES; e++)
    {
        cout << "Notas do Estudante " << e+1 << endl;
        
        for (int n=0; n<NRO_NOTAS; n++)
        {
            cout << "Informe a nota " << n+1 << ": ";
            cin >> dados[e][n];
        }
        cout << endl;
    }
    
    // Percorrer a matriz e exibir uma listagem de alunos e medias
    for (int i=0; i <NRO_ESTUDANTES; i++)
    {
        float soma = 0;
        
        for (int j = 0; j < NRO_NOTAS; j++)
        {
            soma += dados[i][j];
        }
        cout << "Media do aluno " << i+1 << ": "<< soma/NRO_NOTAS << endl;
    }
}


void multiplicando()
{
    int tabela[10][10];

   // Percorre a Matriz e calcula os valores para cada celula
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabela[i][j] = i * j;
        }
    }

    // Imprime o cabeçalho
    cout << "   ";
    for (int i = 0; i < 10; i++)
        cout << "   " << i;

    //Imprime linha tracejada
    cout << endl << "    ";
    
    for (int i = 0; i < 40; i++)
        cout << "-";

    cout << endl;

    // Percorre a matriz, imprimindo o indice lateral e os valores calculados
    for (int i = 0; i < 10; i++)
    {
        cout << i << " |  ";

        for (int j = 0; j < 10; j++)
        {
            if (tabela[i][j] < 10) //ajusta o alinhamento
                cout << " ";
            
            cout << tabela[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;
}


void basics()
{
    //declarar uma matriz de inteiros com 3 linhas e 4 colunas
    int matriz[3][4];
    
    //inicializar a matriz com todos elementos = 0
    for(int linha = 0; linha < 3; linha++)
    {
        for(int coluna = 0; coluna < 4; coluna ++)
        {
            cout << "A linha " << linha << ", coluna "<< coluna <<" estah recebendo 0\n";
            matriz[linha][coluna] = 0;
        }
    }
}

int main()
{
    //basics();
    //notasEstudantes();
    multiplicando();
    
    return 0;
}
