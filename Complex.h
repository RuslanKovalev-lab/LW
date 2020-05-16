
#pragma once
#include <iostream>
#include <string>
#include <complex>
using namespace std;
#ifndef _Complex_h_
#define _Complex_h_
class Complex
{
private:
	double Re;
	double Im;
public:
	Complex();
	Complex(double real, double image);
	Complex(const Complex& other);
	void SetComplex(double real, double image);
	Complex Getcomplex();
	double GetRe();
	double GetIm();
	Complex& operator = (const Complex& other);
	friend Complex operator + (const Complex& a, const Complex& b);
	friend Complex operator - (const Complex& a, const Complex& b);
	friend Complex operator * (const Complex& a, const Complex& b);
	friend Complex operator / (const Complex& a, const Complex& b);
	friend bool operator==(const Complex& a, const Complex& b);
	friend ostream& operator<<(ostream& vyvod, const Complex& other);
	friend istream& operator>>(istream& vvod, Complex& other);
	double abs();
	void p(double r, int n);

};
#endif // !_Complex_h_