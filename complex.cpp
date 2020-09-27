#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;

Complex::Complex() {}
Complex::Complex(double re,double im) {
    this -> Re = re;
    this -> Im = im;
	}

    double Complex::getRe() const 
	{
		return Re;
	}
    double Complex::getIm() const
	{
		return Im;
	}
    void Complex::setRe(double Re)
	{
		Complex::Re = Re;
	}
    void Complex::setIm(double Im)
	{
		Complex::Im = Im;
	}
	void Complex::Display() {
    cout<<"(" << this -> Re << "," << this -> Im << ")" << endl;
	}
	Complex Complex:: operator+(Complex complex) {
    		cout << "(" << this -> Re << "," << this->Im << ") + (" << complex.Re << "," << complex.Im << ")" << endl; 
    		Complex res;
    		res.Re = this -> Re + complex.Re;
    		res.Im = this -> Im + complex.Im;
    		return res;
	}
	Complex Complex::operator-(Complex complex){
    		cout << "(" << this->Re << "," << this->Im << ") - (" << complex.Re << "," << complex.Im << ")" << endl;
		Complex res;
    		res.Re = this -> Re - complex.Re;
    		res.Im = this -> Im - complex.Im;
    		return res;
	}
	Complex Complex::operator*(double c){
		Complex res;
		res.Re = this-> Re * c;
		res.Im = this-> Im * c;
		cout <<"("<<this -> Re<<","<<this -> Im<<")"<<"*"<<c<<"=("<<res.Re<<","<<res.Im<<")"<<endl;
		return res;
	}

	double Complex::absvalue() {
		double z= sqrt(this -> Re * this -> Re + this -> Im * this->Im);
		return z;
	}
	Complex ::~Complex() {
	}
