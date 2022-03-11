
#include "Complejo.hpp"


int main(){
  
  Complejo C1(2,-3),C2(1,3),resultado(0,0),result2;
    cout<<"programa que trabaja con numero complejos:"<<endl;
    C1.mostrarComplejo();
    C2.mostrarComplejo();

/***********/

cout<<"segunda forma"<<endl;
C1.suma(&C2);
C1.mostrarComplejo();
cout<<"tercera forma"<<endl;
 resultado= resultado.suma(&C1,&C2);
 C1.mostrarComplejo();
 resultado.mostrarComplejo();
 
 
 cout<<"csobre carga de operadores"<<endl;
 
 result2=C1+C2;
 cout<<result2<<endl;
 resultado=C1-C2;
 cout<<resultado<<endl;
     return 0;
}	
 	

