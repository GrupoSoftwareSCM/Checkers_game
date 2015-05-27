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
int Fichas::getPosh(){
    return posH;
}
int Fichas::getPosv(){
    return posV;
}


void Fichas::setFichas(string r){
    this->Ficha = r;
    
}
void Fichas::setJugador(string j){
    this->jugador = j;
}
void Fichas::setPosh(int pos){
    this->posH = pos;
}
void Fichas::setPosv(int pos){
    this->posV = pos;
}

string Fichas::toString(){
    return " Jugador: "+jugador+" ficha: "+Ficha+" posicion: ("+posH+","+posV+")";
}
