/* 
 * File:   Ficha.h
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
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
    int posH;
    int posV;
    
public:
    Fichas(string,string,int,int);
    
    string getFichas();
    string getJugador();
    int getPosh();
    int getPosv();
    
    void setFichas(string);
    void setJugador(string);
    void setPosh(int);
    void setPosv(int);
    
    void listar();
};

#endif	/* FICHAS_H */

