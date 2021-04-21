#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int opc, a,b,c, total, h ,r;
  float total2, pi = 3.14;

  do{

    cout<< "Digite a opção: \n 1- Volume do Cubo. \n 2- Volume do Paralelepipedo \n 3- Volume Cilindro. \n 0- Sair \n";
    cin >> opc;

    switch(opc){
      case 1: 
        cout<<"Digite o valor do lado: ";
        cin >> a;

        total = pow(a,3);
        cout<< "O volume do cubo é "<< total<< "m^3"<<endl;

      break;

      case 2:

      cout << "Digite o comprimento do Paralelepipedo: ";
      cin >> a;
      cout << "Digite a largura do Paralelepipedo: ";
      cin >> b;
      cout << "Digite a altura do Paralelepipedo: ";
      cin >> c;

      total = a*b*c;

      cout<< "O volume do Paralelepipedo é "<< total<< "m^3"<<endl;

      break;
      case 3:

      cout << "Digite a altura do Cilindro: ";
      cin >> h;
      cout << "Digite o raio da base do Cilindro: ";
      cin >> r;

      total2 = float(pi * pow(r,2)*h);

      cout<< "O volume do Cilindro é "<< total2<< "m^3"<<endl;

      break;

      case 0:
        cout<< "Saindo \n";
      break;
      default:
      cout<< "Opção invalida \n";

    }

  }while (opc !=0);
  
}
