#include<iostream>
#include<cstdlib>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

class Complejo{
	friend Complejo &operator +(const Complejo &,const Complejo &);
	friend Complejo &operator -(const Complejo &,const Complejo &);
	friend ostream &operator<<(ostream &,const Complejo &);
	
	
	public: Complejo(const double,const double);
	     Complejo();
	
	void mostrarComplejo();
	void setPartereal( const double);
	const double getPartereal() const;
	void setParteImaginaria(const double);
	const double getParteImaginaria() const;
	
	void suma(const Complejo *);	
	Complejo suma(const Complejo * const, const Complejo *const);	
	private:
	double real, Imaginaria;	
		
	
	
	
	
	
	
};
