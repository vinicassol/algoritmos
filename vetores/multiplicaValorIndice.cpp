#include <iostream>
using namespace std;

int main()
{
    int valores[5];
    int contador = 0;

    while (contador < 5)
    {
        cout << "Informar o valor " << contador + 1 << " : " << endl;
        cin >> valores[contador];
        contador++;
    }
    
    contador = 0;
    while (contador < 5)
    {
        cout << valores[contador] << " x " << contador << " = " << valores[contador] * contador << endl;
        contador++;
    }
}







