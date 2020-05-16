#include "Complex.h"
#include <cmath>
#include <iomanip>


void Complex::p(double r, int n)
{
	Re = pow(r, n) * (cos(n * acos(Re / r)));
	Im = pow(r, n) * (sin(n * asin(Im / r)));
}


double Complex::abs()
{
	return sqrt(Im * Im + Re * Re);
}

Complex::Complex()
{
	Re = 0;
	Im = 0;
}

Complex::Complex(double real, double image)
{
	Re = real;
	Im = image;
}
Complex::Complex(const Complex& other)
{
	this->Re = other.Re;
	this->Im = other.Im;
}

void Complex::SetComplex(double real, double image)
{
	Re = real;
	Im = image;
}

Complex Complex::Getcomplex()
{
	Complex z(Re, Im);
	return z;
}

double Complex::GetRe()
{
	return Re;
}

double Complex::GetIm()
{
	return Im;
}

Complex& Complex::operator=(const Complex& other)
{
	if (this != &other) // проверка (указатель на меня) != (адрес other)
	{
		Re = other.Re;
		Im = other.Im;
	}
	return *this;
}

Complex operator+(const Complex& a, const Complex& b)
{
	Complex z;
	z.Re = a.Re + b.Re;
	z.Im = a.Im + b.Im;
	return z;
}

Complex operator-(const Complex& a, const Complex& b)
{
	Complex z;
	z.Re = a.Re - b.Re;
	z.Im = a.Im - b.Im;
	return z;
}

Complex operator*(const Complex& a, const Complex& b)
{
	Complex z;
	z.Re = (a.Re * b.Re) - (a.Im * b.Im);
	z.Im = (a.Re * b.Im) + (a.Im * b.Re);
	return z;
}

Complex operator/(const Complex& a, const Complex& b)
{
	Complex z;
	z.Re = ((a.Re * b.Re) + (a.Im * b.Im)) / (b.Re * b.Re + b.Im * b.Im);
	z.Im = ((a.Re * b.Im) - (a.Im * b.Re)) / (b.Re * b.Re + b.Im * b.Im);
	return z;
}

bool operator==(const Complex& a, const Complex& b)
{
	return ((a.Re == b.Re) && (a.Im == b.Im));
}

ostream& operator<<(ostream& vyvod, const Complex& other)
{
	if (other.Im < 0)
		vyvod << fixed << setprecision(3) << other.Re << "+" << "(" << fixed << setprecision(3) << other.Im << ")" << "i" << endl;
	else
		vyvod << fixed << setprecision(3) << other.Re << "+" << fixed << setprecision(3) << other.Im << "i" << endl;
	return vyvod;

}

istream& operator>>(istream& vvod, Complex& other)
{
	vvod >> other.Re;
	vvod >> other.Im;
	return vvod;
}