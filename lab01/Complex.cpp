// Complex.cpp

#include "Complex.h"
#include <cmath>

Complex::Complex(double _r, double _j)
{
	r = _r;
	j = _j;
}

Complex Complex::Add(Complex arg)
{
	Complex a1 = t2a(arg);
	Complex a2 = t2a(*this);
	return a2t(Complex(a1.r+a2.r,a1.j+a2.j));
}

Complex Complex::Sub(Complex arg)
{
	Complex a1 = t2a(arg);
	Complex a2 = t2a(*this);
	return a2t(Complex(a1.r-a2.r,a1.j-a2.j));
}

Complex Complex::Mul(Complex arg)
{
	Complex a1 = t2a(arg);
	Complex a2 = t2a(*this);
	return a2t(Complex(a1.r*a2.r-a1.j*a2.j,a1.r*a2.j+a1.j*a2.r));
}

Complex Complex::Div(Complex arg)
{
	Complex a1 = t2a(arg);
	Complex a2 = t2a(*this);
	double sqr = a2.r*a2.r+a2.j*a2.j;
	return a2t(Complex((a1.r*a2.r+a1.j*a2.j)/sqr,(a1.j*a2.r-a1.r*a2.j)/sqr));
}

char Complex::Equ(Complex arg)
{
	Complex a1 = t2a(arg);
	Complex a2 = t2a(*this);
	return a1.r==a2.r && a1.j==a2.j;
}

Complex Complex::Conj()
{
	return Complex(r,-j);
}

char Complex::EquR(Complex arg)
{
	Complex a1 = t2a(arg);
	Complex a2 = t2a(*this);
	return a1.r == a2.r;
}

Complex Complex::t2a(Complex arg)
{
	return Complex(arg.r*cos(arg.j),arg.r*sin(arg.j));
}

Complex Complex::a2t(Complex arg)
{
	double z = sqrt(arg.r*arg.r+arg.j*arg.j);
	double za = 0;
	double a = arg.r;
	double b = arg.j;
	if(a>0)
	{
		za = atan(b/a)*sign(b);
	}
	else if(a<0)
	{
		za = (PI-atan(b/a))*sign(b);
	}
	else
	{
		za = (PI/2)*sign(b);
	}
	return Complex(z,za);
}

double Complex::sign(double arg)
{
	if(arg>0)
		return 1;
	if(arg<0)
		return -1;
	return 0;
}
