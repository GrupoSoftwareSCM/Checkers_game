/* 
 * File:   Ficha.cpp
 * Author: oscar
 * 
 * Created on 25 de mayo de 2015, 03:16 PM
 */

#include "Fichas.h"
#include <string>
#include <string.h>

Fichas::Fichas() {
    this->Ficha = "";
    this->jugador = "";
}
string Fichas::getFichas(){
    return Ficha;
}
string Fichas::getJugador(){
    return jugador;
}


void Fichas::setFichas(string r){
    this->Ficha = r;
    
}
void Fichas::setJugador(string j){
    this->jugador = j;
}

string Fichas::toString(){
    return " Jugador: "+jugador+" ficha: "+Ficha;
}
