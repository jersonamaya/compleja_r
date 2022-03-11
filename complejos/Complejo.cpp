#include<iostream>
#include<cstdlib>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Complejo.hpp"

Complejo::Complejo(double miReal, double miImaginaria){
	
	this->real=miReal;
	this->Imaginaria=miImaginaria;
	
}
 void Complejo::mostrarComplejo(){
 	cout<<"El numero complejo es:"<<real<<"+"<<Imaginaria<<"i"<<endl;
 	
 	
 	
 	
 }
void Complejo::setPartereal( const double miReal){
 		
 			this->real=miReal;
 		
 		
 		
	 }
	  
const double Complejo::getPartereal() const{
		
		return real;
		
		}
void Complejo::setParteImaginaria(const double miImaginaria){
	
		this->Imaginaria=miImaginaria;
	
}

const double Complejo::getParteImaginaria()const{

    return Imaginaria;

}


void Complejo::suma(const Complejo *comp){
	
	this->real= this->real+comp->real;
	this->Imaginaria=this->Imaginaria+comp->Imaginaria;

	
	
	
}
Complejo Complejo::suma(const Complejo *const comp1,const Complejo *const comp2){
	
Complejo suma(comp1->real+comp2->real,comp1->Imaginaria+comp2->Imaginaria);
	
return suma;	
	
}

Complejo &operator +(const Complejo &C1,const Complejo &C2){
	
	double real=C1.real+C2.real;
	double img=C1.Imaginaria+C2.Imaginaria;
	return *(new Complejo(real,img));
	
	
	
}

Complejo &operator -(const Complejo &C1,const Complejo &C2 ){
	
	return*(new Complejo(C1.real-C2.real,C1.Imaginaria-C2.Imaginaria));
	
	
	
}

ostream &operator<<(ostream &mensaje,const Complejo &complejo){
	
	char operador;
	if(complejo.Imaginaria>0)
	operador='+';
	mensaje<<complejo.real<<operador<<complejo.Imaginaria<<"i"<<endl;
	return mensaje;
	
}
Complejo::Complejo(){
	
	this->real=0;
	this->Imaginaria=0;
}

