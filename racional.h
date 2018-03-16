#include <iostream>
#include <string>
using namespace std;
#ifndef RACIONAL_H
#define  RACIONAL_H

class Racional{
  private:
    int numerador;
    int denominador;
  public:
    Racional();
    Racional(int, int);
    //Numerador

    int getNumerador()const;
    //Denominador

    int getDenominador()const;

    const Racional operator +(const Racional&)const;
    Racional operator +=(const Racional&);
    const Racional operator -(const Racional&)const;
    Racional operator -=(const Racional&);
    const Racional operator *(const Racional&)const;
    Racional operator *=(const Racional&);
    const Racional operator /(const Racional&)const;
    Racional operator /=(const Racional&);

};
#endif
