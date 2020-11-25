#include <iostream>
using namespace std;

void exemploForVetor()
{
    string alunos[3];
    
    alunos[0] = "William";
    alunos[1] = "Karla";
    alunos[2] = "Dennis";
    
    cout << "Alunos Matriculados: " << endl;
    
    for (int i = 0; i<3; i++)
    {
        cout << alunos[i] << endl;
    }
}

void exercicio_1()
{
    //Escreva um programa que lê 10 números e ao final mostre qual o número maior e qual o menor
    int menor, maior, numero;
    
    for(int i = 1; i<=10; i++)
    {
        cout << "Informe o " << i << "o numero: " << endl;
        cin >> numero;
        if(i == 1) //se for o primeiro valor digitado
        {
            menor = numero;
            maior = numero;
        }
        // verificar se é o maior
        if(numero > maior)
            maior = numero;
        
        // verificar se é o menor
        if(menor < numero)
            numero = menor;
    }
    cout << "O maior numero informado foi " << maior << " enquanto o menor foi " << menor << endl;
}

void exercicio_2()
{
    //Escreva um programa que lê 10 números e após cada leitura diga se o número é par ou ímpar
    int numero;
    for(int i = 1; i<=10; i++)
    {
        cout << "Informe o " << i << "o numero: ";
        cin >> numero;
        
        if(numero % 2 == 0)
            cout << numero << " eh um numero par\n";
        else
            cout << numero << " eh um numero impar\n";
    }
}

void exercicio_3()
{
    //Implemente um programa que calcula a soma dos números pares compreendidos entre dois números lidos inclusive.
    int num1 = 0, num2=0;
    int soma = 0;
    
    while(!(num1 < num2)) // garantir que o primeiro numero seja menor que o segundo
    {
        cout << "Informe dois valores: \n";
        cin >> num1;
        cin >> num2;
    }
    
    for(int i = num1; i <=num2; i++)
    {
        if(i % 2 == 0)
            soma +=i;
    }
    
    cout << "A soma dos numeros pares compreendidos entre " << num1 << " e " << num2 << " eh: " << soma << endl;

}

void exercicio_4()
{
    //Implemente um programa que mostre na tela os números inteiros entre dois números lidos do teclado, organizados em linhas com 10 valores em cada linha
    int num1 = 0, num2=0;
    int contaImpresso = 0;
    
    while(!(num1 < num2)) // garantir que o primeiro numero seja menor que o segundo
    {
        cout << "Informe dois valores: \n";
        cin >> num1;
        cin >> num2;
    }
    
    for(int i = num1; i <=num2; i++)
    {
        cout << i << " ";
        contaImpresso++;
        if(contaImpresso == 10)
        {
            contaImpresso = 0;
            cout << endl;
        }
    }
    cout << endl;
}

void exercicio_5()
{
    /*
     Faça um programa que pergunte um numero ao usuário e imprima a seguinte sequencia lógica:
     *
     **
     ****
     ******
     ********
     (...)
     */
    
    int num;
    
    cout << "Informe um numero: ";
    cin >> num;
    
    for(int i=1; i<=num; i++) //vai controlar as linhas
    {
        for(int j = 0; j < i; j++)//para cada linha, imprimir a quantidade de * correspondente
        {
            cout << "*";
        }
        
        cout << endl;
    }
}

void exercicio_6()
{
    /*
     E agora esta sequência:
     (...)
     *****
     ***
     *

     */
    
    int num;
    
    cout << "Informe um numero: ";
    cin >> num;
    
    for(int i=num; i>=1; i--) //vai controlar as linhas
    {
        for(int j = 0; j < i; j++)//para cada linha, imprimir a quantidade de * correspondente
        {
            cout << "*";
        }
        
        cout << endl;
    }
}
int main()
{
    exercicio_5();
    exercicio_6();
    
    return 0;
}







