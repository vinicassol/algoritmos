
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    /*
     Escreva programas que resolvam as seguintes expressõesmatemáticas (solicite ao usuário para entrar com os
     valores necessários para o cálculo).
     a. (A + B)*C
     b. A - B(C + D ao quadrado)/E
     c. A elevada a B
     d. a * (b elevado c)
     */
    
    // Leitura das variaveis
    int a, b, c, d, e;
    float letraA, letraB, letraC, letraD;
    
    cout << "Informe valores para A, B, C, D, E:\n ";
    cin >> a >> b >> c >> d >> e;
    
    // Calculos
    letraA = (a + b) * c;
    letraB = a - b * (c + pow(d,2)) /e; // d*d == pow(d,2)
    letraC = pow(a, b);
    letraD = a * pow(b, c);
    
    // Mensagens
    cout << " \n\nResultados: \n";
    cout << "Letra A: " << letraA << endl;
    cout << "Letra B: " << letraB << endl;
    cout << "Letra C: " << letraC << endl;
    cout << "Letra D: " << letraD << endl;
    
    return 0;
}
