// Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	public:
		double r;
		double j;
		Complex(double _r, double _j);
		Complex Add(Complex arg);
		Complex Sub(Complex arg);
		Complex Mul(Complex arg);
		Complex Div(Complex arg);
		char Equ(Complex arg);
		Complex Conj();
		char EquR(Complex arg);
		const Complex operator+ (const double another);
	private:
		const double PI = 3.14159265358979323846;
		Complex a2t(Complex arg);
		Complex t2a(Complex arg);
		double sign(double arg);
};

#endif

