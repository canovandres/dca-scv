#include "tcomplejo.h"

TComplejo::TComplejo(double newRe, double newIm){
	re = newRe;
	im = newIm;
}

TComplejo::TComplejo(const TComplejo &copia){
	re = copia.re;
	im = copia.im;
}

TComplejo::~TComplejo(){
	re = im = 0;
}

TComplejo
TComplejo::operator+(const double num){
	TComplejo otro(num);
	TComplejo temp;

	temp = (*this) + otro;

	temp.re = cambioCero(temp.re);
	temp.im = cambioCero(temp.im);

	return temp;
}

TComplejo
TComplejo::operator-(const double num){
	TComplejo otro(num);
	TComplejo temp;

	temp = (*this) - otro;

	temp.re = cambioCero(temp.re);
	temp.im = cambioCero(temp.im);

	return temp;
}

TComplejo
TComplejo::operator*(const double num){
	TComplejo otro(num);
	TComplejo temp;

	temp = (*this) * otro;

	temp.re = cambioCero(temp.re);
	temp.im = cambioCero(temp.im);

	return temp;
}

ostream&
operator<<(ostream &s, const TComplejo &obj){
	s << "(" << obj.re << " " << obj.im << ")";
	return s;
}

double
TComplejo::cambioCero(double num){
	if(num == -0.0){
		return 0.0;
	}
	else{
		return num;
	}
}