#ifndef _TCOMPLEJO_H_
#define _TCOMPLEJO_H_

#include <iostream>
#include <math.h>
using namespace std;

class TComplejo {
	friend ostream& operator<<(ostream &, const TComplejo &);

	private:
		double re;
		double im;
		double cambioCero(double);

	public:
		TComplejo(double = 0, double = 0);
		TComplejo(const TComplejo&);
		~TComplejo();
		
		TComplejo operator+ (const TComplejo&);
		TComplejo operator- (const TComplejo&);
		TComplejo operator* (const TComplejo&);
		TComplejo operator+ (const double);
		TComplejo operator- (const double);
		TComplejo operator* (const double);
		
		bool operator== (const TComplejo&);
		bool operator!= (const TComplejo&);

		double Re();
		double Im();
		void Re(const double);
		void Im(const double);
		double Arg(void);
		double Mod(void);
};

#endif