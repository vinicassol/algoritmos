
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
      Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.
     */
    
    int TempoSesungos, HorasTot, MinutosTot;
    
    cout << endl << "Insira o tempo de execução do trabalho em segundos: ";
    cin >> TempoSesungos;
    
    HorasTot = TempoSesungos / 3600;
    
    MinutosTot = (TempoSesungos - HorasTot * 3600) / 60;
    
    TempoSesungos = TempoSesungos - (HorasTot * 3600 + MinutosTot * 60);
    
    cout << "O tempo de execução da operação é: " << HorasTot << " horas, " << MinutosTot << " minutos e " << TempoSesungos << " segundos" << endl;
    
    
    return 0;
}


