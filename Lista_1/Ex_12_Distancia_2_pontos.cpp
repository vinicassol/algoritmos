//
//  12_Distancia_2_pontos.cpp
//  prog1
//
//  Created by Vini Cassol on 29/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
     Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par ordenado (x,y).
     */
    
    float x1,y1, x2,y2;
    float dist;
    
    cout << "Informe as coordenadas para X1 e Y1: ";
    cin >> x1 >> y1;
    cout << "Informe as coordenadas para X2 e Y2: ";
    cin >> x2 >> y2;
    
    //Formula: dist2 = (x2-x1)2 + (y2-y1)2
    dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    
    cout << "A distancia entre os pontos eh " << dist << endl;
    return 0;
}
