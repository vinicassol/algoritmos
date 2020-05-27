//
//  funcoes.cpp
//  prog1
//
//  Created by Vini Cassol on 26/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
using namespace std;

//Protótipos das funções
int mmc(int a, int b);
bool situacao_aluno(float media, int numFaltas, int numHoras);
int diasNoMes(int mes, int ano);
bool bissexto (int ano);

int main()
{

    //Exercicio 1
    cout << mmc (6,4) << endl;
    
    //Exercicio 2
   if (situacao_aluno(6 , 15, 60))
        cout << "Aprovado!\n";
    else
        cout << "Reprovado\n";

    //Exercicio 3
    cout << diasNoMes(4, 2020) << endl;
    
    return 0;
}

int mmc(int a, int b)
{
    bool find = false;
    int test = a*b;
    int mmc = 0;
    if(test != 0)
    {
        while(!find)
        {
            if(test == a || test == b)
                find = true;
            else if(test % a == 0 && test % b == 0 )
                mmc = test;

            test--;
        }
        return mmc;
    }
    else
        return 0;
        
}


bool situacao_aluno(float media, int numFaltas, int numHoras)
{
    if(media >= 6 && numFaltas <= numHoras*0.25)
        return true;
    else
        return false;
}

int diasNoMes (int mes, int ano)
{
    int dias = 0;
    
    switch (mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
            
        case 2:
            if (bissexto(ano))
                dias = 29;
            else
                dias = 28;
            
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
    }
    return dias;
}

bool bissexto(int ano)
{
    if((ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)))
        return true;
    
    return false;
}
