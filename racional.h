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
    void setNumerador();
    int getNumerador(){return numerador;}
    //Denominador
    void setDenominador();
    int getDenominador(){return denominador;}

    const Racional operator +(const Racional&)const;
    Racional operator +=(const Racional&)const;
    const Racional operator -(const Racional&)const;
    Racional operator -=(const Racional&)const;
    const Racional operator *(const Racional&)const;
    Racional operator *=(const Racional&)const;
    const Racional operator /(const Racional&)const;
    Racional operator /=(const Racional&)const;
    
};
#endif
