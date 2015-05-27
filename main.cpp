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

#define F 10
using namespace std;

/*
 *
 */
void llenarFichas(Fichas Ficha[],string jugador){
    int i;
    for(i=0;i<F;i++){
        Ficha[i].setFichas("p");
        Ficha[i].setJugador(jugador);
    }
}
int main(int argc, char** argv[]) {
    
    
    Tableros Damas;
    
    Fichas cpu[F];
    Fichas jugador[F];
    
    llenarFichas(cpu,"cpu");
    llenarFichas(jugador,"jugador");
    
    Damas.llenar();
    Damas.Dibujar();
    return 0;
    
    
}
