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
