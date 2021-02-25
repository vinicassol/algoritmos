#include <iostream>
#include <time.h>
using namespace std;

void TestaNumero()
{
    //Ler um numero e informar se eh positivo ou negativo
    int valor;
    char op;
    do{
        cout << "Informe um valor: ";
        cin >> valor;
        
        if(valor > 0)
        {
            cout << "Numero Positivo\n";
        }
        else if (valor == 0 )
            cout << "O valor 0 eh neutro\n";
        else
            cout << "Numero Negativo" <<  endl;
        
        cout << "\nDeseja testar outro valor? (S/N)";
        cin >> op;
        
    }while (op == 'S'|| op == 's');
}

void soma10()
{
    //Ler 10 numeros e apresentar a soma deles
    
    int soma = 0;
    int entrada;
    for(int i=0; i<10; i++)
    {
        cin >> entrada;
        soma += entrada;
        //soma = soma+entrada;
    }
}

int soma10Aleatorios()
{
    //Gerar 10 numeros maiores que zero e menores que 10 e apresentar a soma deles
    int soma = 0;
    int num;
    for(int i=0; i<10; i++)
    {
        num = (rand()%9) + 1;
        cout << "Sorteado:  "<< num << endl;
        soma+= num;
    }
    //cout << "Soma dos 10 valores: "<< soma << endl;
    return soma;
}

struct Equipe{
    string nome;
    int pontos;
};

void vetores()
{

    Equipe times[3];
    
    times[0].nome = "Gremio";
    times[0].pontos = rand()%100;
    
    times[1].nome = "Inter";
    times[1].pontos = rand()%100;
    
    times[2].nome = "Sao Paulo";
    times[2].pontos = rand()%100;
    
    for(int i = 0; i< 3; i++)
        cout << "Time: " << times[i].nome << " -  Pontos: " << times[i].pontos <<endl;
    
}

int main()
{
    srand(time(0));
    //TestaNumero();
    
    //int retorno =  soma10Aleatorios();
    //cout << "A soma eh: " << retorno << endl;
    
    vetores();
    
    return 0;
}
