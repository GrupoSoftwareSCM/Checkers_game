/* 
 * File:   Ficha.cpp
 * Author: oscar
 * 
 * Created on 25 de mayo de 2015, 03:16 PM
 */

#include "Fichas.h"
#include <string>
#include <string.h>

Ficha::Ficha(string r, string j) {
    if(r.compare(" ") == 0){
        F = 'p'; // P DE PEON
        jugador = j;
    }
    else{
        F = r; // R DE REINA
        jugador = j;
    }
}

Ficha::Ficha(const Ficha& orig) {
}

Ficha::~Ficha() {
}

string Ficha::getFicha(){
    return F;
}
string Ficha::getJugador(){
    return jugador;
}


void Ficha::setFicha(string r){
    F = r;
    
}
void Ficha::setJugador(string j){
    jugador = j;
}

string Ficha::toString(){
    return " Jugador:"+jugador+"ficha: "+F;
}
