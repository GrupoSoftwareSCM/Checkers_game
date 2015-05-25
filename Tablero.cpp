/* 
 * File:   Tablero.cpp
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
 * 
 * Created on 14 de mayo de 2015, 03:48 PM
 */

#include "Tablero.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

Tablero::Tablero() {
    
}

void Tablero::llenar(){
    int i,j;
    
    T[0][0] = 92;  
    
    T[0][1] = 'A'; // |
    T[0][2] = 'B'; // |
    T[0][3] = 'C'; // |
    T[0][4] = 'D'; // |     COORDENADAS ARRIBA
    T[0][5] = 'E'; // |
    T[0][6] = 'F'; // |
    T[0][7] = 'G'; // |
    T[0][8] = 'H'; // |
    
    T[1][0] = '1'; // |
    T[2][0] = '2'; // |
    T[3][0] = '3'; // |
    T[4][0] = '4'; // |
    T[5][0] = '5'; // |     COORDENADAS COSTADO
    T[6][0] = '6'; // |
    T[7][0] = '7'; // |
    T[8][0] = '8'; // |
            
    for(i=1;i<9;i++){
        for(j=1;j<9;j++){
            if((i+j)%2 == 0){
                T[i][j] = '*';
            }
            else{
                T[i][j] = '-';
            }
        }
    }
    
}
void Tablero::Dibujar(){
    int i,j;
    for(i=0;i<9;i++){
        //cout<<"\t";
        for(j=0;j<9;j++){
            cout<<T[i][j]<<"  ";
        }
        cout<<endl;
    }
}
Tablero::Tablero(const Tablero& orig) {
}

Tablero::~Tablero() {
}



