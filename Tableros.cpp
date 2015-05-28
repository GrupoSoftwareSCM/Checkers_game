/* 
 * File:   Tablero.cpp
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
 * 
 * Created on 14 de mayo de 2015, 03:48 PM
 */

#include "Tableros.h"
#include "Fichas.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>


using namespace std;

Tableros::Tableros() {
    
}

void Tableros::llenar(){
    int i,j;

    Tablero[0][0] = 92;  
    
    Tablero[0][1] = '0'; // |
    Tablero[0][2] = '1'; // |
    Tablero[0][3] = '2'; // |
    Tablero[0][4] = '3'; // |     COORDENADAS HORIZONTALES
    Tablero[0][5] = '4'; // |
    Tablero[0][6] = '5'; // |
    Tablero[0][7] = '6'; // |
    Tablero[0][8] = '7'; // |
    Tablero[0][9] = '8'; // |
    Tablero[0][10] = '9';// |
    
    Tablero[1][0] = '0'; // |
    Tablero[2][0] = '1'; // |
    Tablero[3][0] = '2'; // |
    Tablero[4][0] = '3'; // |
    Tablero[5][0] = '4'; // |     COORDENADAS VERTICALES
    Tablero[6][0] = '5'; // |
    Tablero[7][0] = '6'; // |
    Tablero[8][0] = '7'; // |
    Tablero[9][0] = '8'; // |
    Tablero[10][0] = '9';// |
           
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
            if(i>=1 && i<=3 && (i+j)%2 == 0){
                Tablero[i][j] = "O";
            }
            if(i>=8 && i<=10 && (i+j)%2 == 0){
                Tablero[i][j] = "X";
            }
            else{
                if((i+j)%2 == 0 && Tablero[i][j] != "O" && Tablero[i][j] != "X"){
                    Tablero[i][j] = "*";
                }
                if((i+j)%2 != 0 && Tablero[i][j] != "O" && Tablero[i][j] != "X"){
                    Tablero[i][j] = "-";
                }
            }
        }
    }
    
}

void Tableros::Dibujar(){
    int i,j;
    for(i=0;i<11;i++){
        cout<<"\t\t\t";
        for(j=0;j<11;j++){
            cout<<Tablero[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void Tableros::mover(int i, int j, int m){
   /*
    * |     i posicion de la ficha
    * |     j posicion de la ficha
    * |     m movimiento izquierda[1] o derecha[2]
    */
    string aux;
    if(Tablero[i][j] != "*" && Tablero[i][j] != "-"){
        if(Tablero[i][j] == "X"){
            Fichas ficha("X","jug",j,i);
            if(m == 1){
                if(Tablero[i-1][j-1] != Tablero[i][j]){
                    aux = Tablero[i-1][j-1];
                    Tablero[i-1][j-1] = ficha.getFichas();
                    Tablero[i][j] = aux;
                }
                else{
                    cout<<"imposible mover"<<endl;
                }
            }
            if(m == 2){
                if(Tablero[i-1][j+1] != Tablero[i][j]){
                    aux = Tablero[i-1][j+1];
                    Tablero[i-1][j+1] = ficha.getFichas();
                    Tablero[i][j] = aux;
                }
                else{
                    cout<<"imposible mover"<<endl;
                }
            }
        }
    }
    else{
        cout<<"no hay fichas en ese espacio"<<endl;
    }
}



