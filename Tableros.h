/* 
 * File:   Tablero.h
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
 *
 * Created on 14 de mayo de 2015, 03:48 PM
 */

#ifndef TABLEROS_H
#define	TABLEROS_H

#include <string>
#include "Fichas.h"

using namespace std;
#define T 11
class Tableros{
private:
    string Tablero[T][T];
public:
    Tableros();
    void llenar();
    void Dibujar();
    void mover(int,int,int);
};

#endif	/* TABLEROS_H */

