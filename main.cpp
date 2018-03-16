#include <iostream>
#include <string>
#include <fstream>
#include "racional.h"
using namespace std;

int menu();

int main(){
  int opcion = 0;
  while (opcion != 9) {
    switch (opcion = menu()) {

      case 1:{
        
        break;
      }
    }
  }
}

int menu(){
  int flag;
  int numberSelection;
  while (flag == 0) {
    cout<<"1. Suma"<<endl;
    cout<<"2. Suma y Asignacion"<<endl;
    cout<<"3. Resta"<<endl;
    cout<<"4. Resta y Asignacion"<<endl;
    cout<<"5. Multiplicacion "<<endl;
    cout<<"6. Multiplicacion y Asignacion"<<endl;
    cout<<"7. Division"<<endl;
    cout<<"8. Division y Asignacion"<<endl;
    cout<<"9. SALIR"<<endl;
    cout<<"Ingrese numero para ingresar a alguna opcion"<<endl;
    cin>> numberSelection;
    return numberSelection;
  }
}
