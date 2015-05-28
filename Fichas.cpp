/* 
 * File:   Ficha.cpp
 * Author: Oscar Muñoz Bernales
 *         Jean Cid Bustos
 *         Gabriel Sanhueza ...
 * 
 * Created on 25 de mayo de 2015, 03:16 PM
 */

#include "Fichas.h"
#include <string>
#include <string.h>
#include <iostream>

Fichas::Fichas(string f,string j,int h,int v) {
    this->Ficha = f;
    this->jugador = j;
    this->posH = h;
    this->posV = v;
}

//METODOS DE OBTENCIO
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

//METODOS DE MEDOFICAION
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

//MOTODO PARA MOSTRAR
void Fichas::listar(){
    cout<<" Jugador: "<<jugador<<" ficha: "<<Ficha<<" posicion("<<posH<<","<<posV<<")"<<endl;
}
