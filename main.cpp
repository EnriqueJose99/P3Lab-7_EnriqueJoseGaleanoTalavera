#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ios>
#include "racional.h"

using namespace std;

int menu();
int minimo(int, int);
int simplificar();

int main(){
  int opcion = 0;
  int numeradorM = 0;
  int denominadorM = 0;
  int numeradorM1 = 0;
  int denominadorM1 = 0;
  Racional* racional1;
  Racional* racional2;
  Racional* racionalRes1;
  Racional* racionalRes2;
  Racional* racionalMul1;
  Racional* racionalMul2;
  Racional* racionalDIVI1;
  Racional* racionalDIVI2;
  ofstream fileRead;
  fileRead.open("log.txt", ios::app);
  vector<Racional*> rr;
  while (opcion != 11) {
    switch (opcion = menu()) {
      case 1:{
        char resp = ' ';
          cout<<"Ingrese numerador: "<<endl;
          cin>>numeradorM;
          cout<<"Ingrese denominador: "<<endl;
          cin>>denominadorM;
          if (denominadorM == 0) {
            cout<<"No se puede divir entre 0";
          }else{
            Racional* fracciones = new Racional(numeradorM, denominadorM);
            rr.push_back(fracciones);
            cout<<"Fraccion creada exitosamente"<<endl;
          }
        break;
      }
      //suma
      case 2:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racional1 = rr[pos1];
        racional2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racional1->getNumerador()<<"/"<<racional1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racional2->getNumerador()<<"/"<<racional2->getDenominador()<<endl;
        Racional total = *racional1 + *racional2;
        cout<<"La suma de las divisiones son: "<<endl;
        cout<< total.getNumerador()<<"/"<<total.getDenominador()<<endl;
        if (total.getNumerador() == 0) {
          fileRead<<racional1->getNumerador()<<"/"<<racional1->getDenominador()<<" + "
          << racional2->getNumerador()<<"/"<<racional2->getDenominador()<<" = "<< " 0 "<<endl;
          /* code */
        }else{
          fileRead<<racional1->getNumerador()<<"/"<<racional1->getDenominador()<<" + "
          << racional2->getNumerador()<<"/"<<racional2->getDenominador()<<" = "<< total.getNumerador()
          <<"/"<<total.getDenominador()<<endl;
        }
        break;
      }
      //suma Asignacion
      case 3:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racional1 = rr[pos1];
        racional2 = rr[pos2];
        cout<<"Primera Fraccion"<<endl;
        cout<<racional1->getNumerador()<<"/"<<racional1->getDenominador()<<endl;
        cout<<"Segunda Fraccion"<<endl;
        cout<<racional2->getNumerador()<<"/"<<racional2->getDenominador()<<endl;
        *racional1 += *racional2;
        cout<<"La suma de las divisiones son: "<<endl;
        cout<<racional1->getNumerador() <<"/"<< racional1->getDenominador()<<endl;

        if (racional1->getNumerador() == 0) {
          fileRead<<racional1->getNumerador()<<"/"<<racional1->getDenominador()<<" + "
          << racional2->getNumerador()<<"/"<<racional2->getDenominador()<<" = "<< " 0 "<<endl;
        }else{
          fileRead<<"Esto significa += "<<racional1->getNumerador()<<"/"<<racional1->getDenominador()<<endl;
        }
        break;
      }
      //Resta
      case 4:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racionalRes1 = rr[pos1];
      racionalRes2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racionalRes2->getNumerador()<<"/"<<racionalRes2->getDenominador()<<endl;
        Racional totalResta = (*racionalRes1) - (*racionalRes2);
        cout<<"La resta de las divisiones son: "<<endl;
        cout<< totalResta.getNumerador()<<"/"<<totalResta.getDenominador()<<endl;
        if (totalResta.getNumerador() == 0) {
          fileRead<<racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<" - "
          << racionalRes2->getNumerador()<<"/"<<racionalRes2->getDenominador()<<" = "
          << " 0 "<<endl;
          /* code */
        }else{
             fileRead<<racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<" - "
                     << racionalRes2->getNumerador()<<"/"<<racionalRes2->getDenominador()<<" = "
                     << totalResta.getNumerador()<<"/"<<totalResta.getDenominador()<<endl;
        }
        break;
      }
      //resta Asignacion
      case 5:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racionalRes1 = rr[pos1];
        racionalRes2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racionalRes2->getNumerador()<<"/"<<racionalRes2->getDenominador()<<endl;
        (*racionalRes1) -= (*racionalRes2);
        cout<<"La resta de las divisiones son: "<<endl;
        cout<< racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<endl;
        if (racionalRes1->getNumerador() == 0) {
          fileRead<<racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<" - "
          << racionalRes2->getNumerador()<<"/"<<racionalRes2->getDenominador()<<" = "
          << " 0 "<<endl;
          /* code */
        }else{
             fileRead<<"Esto significa -="<<racionalRes1->getNumerador()<<"/"<<racionalRes1->getDenominador()<<endl;
        }
        break;
      }
      //Multiplicacion
      case 6:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racionalMul1 = rr[pos1];
        racionalMul2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racionalMul2->getNumerador()<<"/"<<racionalMul2->getDenominador()<<endl;
        Racional totalMultiplicacion = (*racionalMul1) * (*racionalMul2);
        cout<<"La Multiplicacion de las divisiones son: "<<endl;
        cout<< totalMultiplicacion.getNumerador()<<"/"<<totalMultiplicacion.getDenominador()<<endl;
        if (totalMultiplicacion.getNumerador() == 0) {
          fileRead<<racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<" * "
          << racionalMul2->getNumerador()<<"/"<<racionalMul2->getDenominador()<<" = "<<" 0 "<<endl;
        }else{
          fileRead<<racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<" * "
          << racionalMul2->getNumerador()<<"/"<<racionalMul2->getDenominador()<<" = "
          << totalMultiplicacion.getNumerador()<<"/"
          <<totalMultiplicacion.getDenominador()<<endl;
        }
        break;
      }
      case 7:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racionalMul1 = rr[pos1];
        racionalMul2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racionalMul2->getNumerador()<<"/"<<racionalMul2->getDenominador()<<endl;
        (*racionalMul1) *= (*racionalMul2);
        cout<<"La Multiplicacion de las divisiones son: "<<endl;
        cout<< racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<endl;
        if (racionalMul1->getNumerador() == 0) {
          fileRead<<racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<" * "
          << racionalMul2->getNumerador()<<"/"<<racionalMul2->getDenominador()<<" = "<<" 0 "<<endl;
        }else{
          fileRead<<"Esto significa *= "<<racionalMul1->getNumerador()<<"/"<<racionalMul1->getDenominador()<<endl;
        }
        break;
      }
      //Division
      case 8:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racionalDIVI1 = rr[pos1];
        racionalDIVI2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racionalDIVI2->getNumerador()<<"/"<<racionalDIVI2->getDenominador()<<endl;
        Racional totalDivision = (*racionalDIVI1) / (*racionalDIVI2);
        cout<<"La Division de las divisiones son: "<<endl;
        cout<< totalDivision.getNumerador()<<"/"<<totalDivision.getDenominador()<<endl;
        if (totalDivision.getNumerador() == 0) {
          fileRead<<racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<" / "
          << racionalDIVI2->getNumerador()<<"/"<<racionalDIVI2->getDenominador()<<" = "
          << " 0 "<<endl;
          /* code */
        }else{
          fileRead<<racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<" / "
          << racionalDIVI2->getNumerador()<<"/"<<racionalDIVI2->getDenominador()<<" = "
          << totalDivision.getNumerador()<<"/"
          <<totalDivision.getDenominador()<<endl;
        }
        break;
      }
      //Division y Asignacion
      case 9:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Pocision: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        int pos1;
        int pos2;
        cout<<"Ingrese la posicion de la primera fraccion: "<<endl;
        cin>>pos1;
        cout<<"Ingrese la posicion de la segunda fraccion: "<<endl;
        cin>>pos2;
        racionalDIVI1 = rr[pos1];
        racionalDIVI2 = rr[pos2];
        cout<<"Primera Fracion"<<endl;
        cout<<racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<endl;
        cout<<"Segunda Fracion"<<endl;
        cout<<racionalDIVI2->getNumerador()<<"/"<<racionalDIVI2->getDenominador()<<endl;
        (*racionalDIVI1) / (*racionalDIVI2);
        cout<<"La Division de las divisiones son: "<<endl;
        cout<< racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<endl;
        if (racionalDIVI1->getNumerador() == 0) {
          fileRead<<racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<" / "
          << racionalDIVI2->getNumerador()<<"/"<<racionalDIVI2->getDenominador()<<" = "
          << " 0 "<<endl;
          /* code */
        }else{
          fileRead<<"Esto significa /= "<<racionalDIVI1->getNumerador()<<"/"<<racionalDIVI1->getDenominador()<<endl;
        }
        break;


      }
      case 10:{
        for (int i = 0; i < rr.size(); i++) {
          cout<<"Posiciones: "<<i<<" "<<rr[i]->getNumerador()<<"/"<<rr[i]->getDenominador()<<endl;
        }
        break;
      }
      case 11:{
        if (racional1!= NULL) {
            delete racional1;
        }
        if (racional2!= NULL) {
            delete racional2;
        }
        if (racionalRes1!= NULL) {
            delete racionalRes1;
        }
        if (racionalRes2!= NULL) {
            delete racionalRes2;
        }
        if (racionalMul1!= NULL) {
            delete racionalMul1;
        }
        if (racionalMul2!= NULL) {
            delete racionalMul2;
        }
        if (racional1!= NULL) {
            delete racional1;
        }
        if (racionalDIVI1!= NULL) {
            delete racionalDIVI1;
        }
        if (racionalDIVI2!= NULL) {
            delete racionalDIVI2;
        }
        break;
      }
    }
  }
}

int menu(){
  int flag =  0 ;
  int numberSelection = 0;
  while (flag == 0) {
    cout<<" "<<endl;
    cout<<"1. Crear Fraciones"<<endl;
    cout<<"2. Suma"<<endl;
    cout<<"3. Suma y Asignacion"<<endl;
    cout<<"4. Resta"<<endl;
    cout<<"5. Resta y Asignacion"<<endl;
    cout<<"6. Multiplicacion "<<endl;
    cout<<"7. Multiplicacion y Asignacion"<<endl;
    cout<<"8. Division"<<endl;
    cout<<"9. Division y Asignacion"<<endl;
    cout<<"10. Listar Fracciones"<<endl;
    cout<<"11. Salir"<<endl;
    cout<<"Ingrese numero para ingresar a alguna opcion"<<endl;
    cin>> numberSelection;
    return numberSelection;
  }
}
