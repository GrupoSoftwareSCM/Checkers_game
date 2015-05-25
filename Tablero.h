/* 
 * File:   Tablero.h
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
 *
 * Created on 14 de mayo de 2015, 03:48 PM
 */

#ifndef TABLERO_H
#define	TABLERO_H

#include <string>

using namespace std;
class Tablero {
private:
    string T[9][9];

public:
    Tablero();
    void llenar();
    void Dibujar();
    void Listar();
    Tablero(const Tablero& orig);
    virtual ~Tablero();

};

#endif	/* TABLERO_H */

