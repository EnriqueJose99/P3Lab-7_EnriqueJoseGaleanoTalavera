#include <iostream>
#include "racional.h"
#include <cmath>

using namespace std;

Racional::Racional(){

}

Racional::Racional(int numerador, int denominador){
  this->numerador = numerador;
  this->denominador = denominador;
  for (int i = this->denominador*this->numerador; i>1 ; i--) {
    if ((this->denominador%i == 0)&&(this->numerador%i==0)) {
      this->denominador=this->denominador/i;
      this->numerador=this->numerador/i;
    }
  }
}

int Racional::getNumerador()const{
  return numerador;
}
int Racional::getDenominador()const{
  return denominador;
}

const Racional Racional::operator +(const Racional& rightValue)const{
  int numeradorS;
  numeradorS = (this->numerador*rightValue.getDenominador())+
  (rightValue.getNumerador()*this->denominador);
  int denominadorS;
  denominadorS = (this->denominador*rightValue.getDenominador());
  //Racional* total = new Racional();
  Racional* s = new Racional(numeradorS, denominadorS);
  return *s;
}

const Racional Racional::operator -(const Racional& rightValue)const{
  int numeradorRE;
  numeradorRE = (this->numerador*rightValue.getDenominador())-
  (rightValue.getNumerador()*this->denominador);
  int denominadorRE;
  denominadorRE = (this->denominador*rightValue.getDenominador());
  //Racional* total = new Racional();
  Racional* r = new Racional(numeradorRE, denominadorRE);
  return *r;

}
const Racional Racional::operator /(const Racional& rightValue)const{
  int numeradorDI;
  numeradorDI = (this->numerador*rightValue.getDenominador());
  int denominadorDI;
  denominadorDI = (this->denominador*rightValue.getNumerador());
  Racional* d = new Racional(numeradorDI, denominadorDI);
  return *d;
}
const Racional Racional::operator *(const Racional& rightValue)const{
  int numeradoMU;
  numeradoMU = (this->numerador*rightValue.getNumerador());
  int denominadorMU;
  denominadorMU = (this->denominador*rightValue.getDenominador());
  Racional* m = new Racional(numeradoMU, denominadorMU);
  return *m;
}
