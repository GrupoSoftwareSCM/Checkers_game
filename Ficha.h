/* 
 * File:   Ficha.h
 * Author: oscar
 *
 * Created on 25 de mayo de 2015, 03:16 PM
 */

#ifndef FICHA_H
#define	FICHA_H

#include <string>
using namespace std;

class Ficha {
private:
    string F; //F = FICHA
    string jugador;
    
public:
    Ficha(string);
    Ficha(const Ficha& orig);
    virtual ~Ficha();
    
    string getFicha();
    string getJugador();
    
    void setFicha(string);
    void setJugador(string);
    
    string toString();
    

};

#endif	/* FICHA_H */

