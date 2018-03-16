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

  ofstream fileRead;
  fileRead.open("log.txt", ios::app);
  vector<Racional*> rr;
  while (opcion != 10) {
    switch (opcion = menu()) {
      case 1:{
        char resp = ' ';
        do {
          cout<<"Ingrese numerador: "<<endl;
          cin>>numeradorM;
          cout<<"Ingrese denominador: "<<endl;
          cin>>denominadorM;
          Racional* fracciones = new Racional(numeradorM, denominadorM);

          rr.push_back(fracciones);
          cout<<"Fraccion creada exitosamente"<<endl;
        } while(resp =='s' ||resp == 'S');
        cout<<"desea continuar [s/n]"<<endl;
        cin>>resp;
        break;
      }
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
        Racional* racional1 = rr[pos1];
        Racional* racional2 = rr[pos2];
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
        delete racional1;
        delete racional2;

        break;
      }
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
        Racional* racionalRes1 = rr[pos1];
        Racional* racionalRes2 = rr[pos2];
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
        delete racionalRes1;
        delete racionalRes2;

        break;
      }
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
        Racional* racionalMul1 = rr[pos1];
        Racional* racionalMul2 = rr[pos2];
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
        delete racionalMul1;
        delete racionalMul2;
        break;
      }
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
        Racional* racionalDIVI1 = rr[pos1];
        Racional* racionalDIVI2 = rr[pos2];
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
        delete racionalDIVI1;
        delete racionalDIVI2;
        break;
      }
    }
  }
}

int menu(){
  int flag =  0 ;
  int numberSelection = 0;
  while (flag == 0) {
    cout<<"1. Crear Fraciones"<<endl;
    cout<<"2. Suma"<<endl;
    cout<<"3. Suma y Asignacion"<<endl;
    cout<<"4. Resta"<<endl;
    cout<<"5. Resta y Asignacion"<<endl;
    cout<<"6. Multiplicacion "<<endl;
    cout<<"7. Multiplicacion y Asignacion"<<endl;
    cout<<"8. Division"<<endl;
    cout<<"9. Division y Asignacion"<<endl;
    cout<<"10. SALIR"<<endl;
    cout<<"Ingrese numero para ingresar a alguna opcion"<<endl;
    cin>> numberSelection;
    return numberSelection;
  }
}
