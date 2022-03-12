
#include "Complejo.hpp"


int main(){
  
  Complejo C1(2,-3),C2(1,3),resultado(0,0),result2,result3,result4;
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
 
 
 result3=C1*C2;
 cout<<result3<<endl;
 
 result4=C1/C2;
 cout<<result4<<endl;
     return 0;
}	
 	

