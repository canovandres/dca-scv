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
TComplejo::operator+(const TComplejo &otro){
	TComplejo temp;

	temp.re = re + otro.re;
	temp.im = im + otro.im;

	temp.re = cambioCero(temp.re);
	temp.im = cambioCero(temp.im);

	return temp;
}

TComplejo
TComplejo::operator-(const TComplejo &otro){
	TComplejo temp;

	temp.re = re - otro.re;
	temp.im = im - otro.im;

	temp.re = cambioCero(temp.re);
	temp.im = cambioCero(temp.im);

	return temp;
}

TComplejo
TComplejo::operator*(const TComplejo &otro){
	TComplejo temp;

	temp.re = (re * otro.re - im * otro.im);
	temp.im = (re * otro.im + im * otro.re);

	temp.re = cambioCero(temp.re);
	temp.im = cambioCero(temp.im);

	return temp;
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

bool
TComplejo::operator==(const TComplejo& complejo){
	bool temp;

	temp = (re == complejo.re && im == complejo.im) ? true : false;

	return temp;
}

bool
TComplejo::operator!=(const TComplejo& complejo){
	return !((*this) == complejo);
}

double
TComplejo::Re(){
	return re;
}

double
TComplejo::Im(){
	return im;
}

void
TComplejo::Re(const double newre){
	re = newre;
}

void
TComplejo::Im(const double newim){
	im = newim;
}

double
TComplejo::Arg(void){
	double a = atan2(im, re);
	return a;
}

double
TComplejo::Mod(void){
	double m = sqrt(pow(re, 2) + pow(im, 2));
	return m;
}
