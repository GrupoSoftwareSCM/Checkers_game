/*
 * File:   main.cpp
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
 *
 * Created on 14 de mayo de 2015, 04:14 AM
 */

#include <cstdlib>
#include <iostream>
#include "Tableros.h"
#include "Fichas.h"

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

/*
 *
 */

int main(int argc, char** argv[]) {
    
    
    Tableros Damas;
        
    Damas.llenar();
    Damas.Dibujar();
    
    int i,j,m;
    cout<<"seleccione una ficha: "<<endl;;
    cout<<"coordenadas verticales: ";
    cin>>i;
    cout<<"coordenadas horizontales: ";
    cin>>j;
    cout<<"izquierda[1] o derecha[2]: ";
    cin>>m;
    
    Damas.mover(i+1,j+1,m);
    
    Damas.Dibujar();
    
    return 0;
    
    
}
