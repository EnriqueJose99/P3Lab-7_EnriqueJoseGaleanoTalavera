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
 Racional Racional::operator +=(const Racional& rightValue){
  int numeradorS;
  numeradorS = (this->numerador*rightValue.getDenominador())+
  (rightValue.getNumerador()*this->denominador);
  int denominadorS;
  denominadorS = (this->denominador*rightValue.getDenominador());
  //Racional* total = new Racional();
  numerador = numeradorS;
  denominador = denominadorS;
  Racional* i = new Racional(numerador, denominador);

  return *i;
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
Racional Racional::operator -=(const Racional& rightValue){
 int numeradorRes;
 numeradorRes = (this->numerador*rightValue.getDenominador())-
 (rightValue.getNumerador()*this->denominador);
 int denominadorRes;
 denominadorRes = (this->denominador*rightValue.getDenominador());
 //Racional* total = new Racional();
 numerador = numeradorRes;
 denominador = denominadorRes;
 Racional* ir = new Racional(numerador, denominador);

 return *ir;
}
const Racional Racional::operator /(const Racional& rightValue)const{
  int numeradorDI;
  numeradorDI = (this->numerador*rightValue.getDenominador());
  int denominadorDI;
  denominadorDI = (this->denominador*rightValue.getNumerador());
  Racional* d = new Racional(numeradorDI, denominadorDI);
  return *d;
}

Racional Racional::operator /=(const Racional& rightValue){
  int numeradorDI;
  numeradorDI = (this->numerador*rightValue.getDenominador());
  int denominadorDI;
  denominadorDI = (this->denominador*rightValue.getNumerador());
  numerador = numeradorDI;
  denominador = denominadorDI;
  Racional* id = new Racional(numeradorDI, denominadorDI);
  return *id;
}

const Racional Racional::operator *(const Racional& rightValue)const{
  int numeradoMU;
  numeradoMU = (this->numerador*rightValue.getNumerador());
  int denominadorMU;
  denominadorMU = (this->denominador*rightValue.getDenominador());
  Racional* m = new Racional(numeradoMU, denominadorMU);
  return *m;
}
Racional Racional::operator *=(const Racional& rightValue){
  int numeradoMU;
  numeradoMU = (this->numerador*rightValue.getNumerador());
  int denominadorMU;
  denominadorMU = (this->denominador*rightValue.getDenominador());
  numerador = numeradoMU;
  denominador = denominadorMU;
  Racional* im = new Racional(numeradoMU, denominadorMU);
  return *im;
}
