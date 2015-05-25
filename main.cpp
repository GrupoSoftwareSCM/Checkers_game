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
#include "Tablero.h"

#include <stdio.h>
#include <stdlib.h>


using namespace std;

/*
 *
 */
int main(int argc, char** argv[]) {

    Tablero Damas;
    
    Damas.llenar();
    Damas.Dibujar();
    return 0;
}

