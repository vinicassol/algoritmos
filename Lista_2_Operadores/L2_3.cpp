
#include <iostream>
#include <cmath>
using namespace std;

int somaDois(int v1, int v2)
{
    return v1+v2;
}

int multiplicaDois(int v1, int v2)
{
    return v1*v2;
}

int main()
{
    
    /*
     Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação dos valores entre si, baseando-se na utilização da propriedade distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com D;
     */
    
    float A, B, C, D;
    cout << endl << "Insira o valor da variável A: ";
    cin >> A;
    cout << "Insira o valor da variável B: ";
    cin >> B;
    cout << "Insira o valor da variável C: ";
    cin >> C;
    cout << "Insira o valor da variável D: ";
    cin >> D;
    
   /*
    cout << "A * B = " << A * B << endl;
    cout << "A + B = " << A + B << endl;
    cout << "A * C = " << A * C << endl;
    cout << "A + C = " << A + C << endl;
    cout << "A * D = " << A * D << endl;
    cout << "A + D = " << A + D << endl;
    cout << "B * C = " << B * C << endl;
    cout << "B + C = " << B + C << endl;
    cout << "B * D = " << B * D << endl;
    cout << "B + D = " << B + D << endl;
    cout << "C * D = " << C * D << endl;
    cout << "C + D = " << C + D << endl;
    */
    
    cout << "A * B = " << multiplicaDois(A, B) << endl;
    cout << "A + B = " << somaDois(A, B) << endl;
    cout << "A * C = " << multiplicaDois(A, C) << endl;
    cout << "A + C = " << somaDois(A, C) << endl;
    cout << "A * D = " << multiplicaDois(A, D) << endl;
    cout << "A + D = " << somaDois(A, D) << endl;
    cout << "B * C = " << multiplicaDois(B, C) << endl;
    cout << "B + C = " << somaDois(B, C) << endl;
    cout << "B * D = " << multiplicaDois(B, D) << endl;
    cout << "B + D = " << somaDois(B, D) << endl;
    cout << "C * D = " << multiplicaDois(C, D) << endl;
    cout << "C + D = " << somaDois(C, D) << endl;
    
    
    return 0;
}

