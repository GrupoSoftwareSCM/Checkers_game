/* 
 * File:   Ficha.h
 * Author: oscar
 *
 * Created on 25 de mayo de 2015, 03:16 PM
 */

#ifndef FICHAS_H
#define	FICHAS_H

#include <string>
using namespace std;

class Fichas {
private:
    string Ficha;
    string jugador;
    
public:
    Fichas();
    
    string getFichas();
    string getJugador();
    
    void setFichas(string);
    void setJugador(string);
    
    string toString();
};

#endif	/* FICHAS_H */

