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
    
public:
    Ficha();
    Ficha(const Ficha& orig);
    virtual ~Ficha();

};

#endif	/* FICHA_H */

