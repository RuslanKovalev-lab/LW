#include "Complex.h"
#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	bool f;
	Complex u;
	Complex z(2.3, 7.7);
	Complex v(z);
	cout << "ѕроверим работу конструкторов по умолчанию и инициализатора:" << endl << "u=" << u << endl << "z=" << z << endl;
	cout << "ѕроверим работу конструктора копировани€:" << endl << "v=" << v << endl;
	cout << "ѕолучим значение v= " << v.Getcomplex() << endl;
	z.SetComplex(3, 7);
	cout << "ѕолучим новое значение z= " << z.Getcomplex() << endl;
	cout << "ѕолучим значение вещественной части z(re)= " << z.GetRe() << endl;
	cout << "ѕолучим значение мнимой части z(im)= " << z.GetIm() << endl;
	u = z;
	cout << "ѕроверим работу оператора присваивани€:" << endl << "u=" << u << endl;
	u = z + v;
	cout << "ѕроверим работу оператора сложени€:" << endl << "u=" << u << endl;
	u = z - v;
	cout << "ѕроверим работу оператора вычитани€:" << endl << "u=" << u << endl;
	u = z * v;
	cout << "ѕроверим работу оператора произведени€:" << endl << "u=" << u << endl;
	u = z / v;
	cout << "ѕроверим работу оператора частного:" << endl << "u=" << u << endl;
	f = (u == z);
	cout << "ѕроверим работу оператора равенства:" << endl << "f=" << f << endl;
	cout << "проверим работу модул€ косплексного числа:" << "\n" << "abs(u)=" << u.abs() << "\n";
	double r = u.abs();
	cout << "введите степень комплексного чилса:" << endl;
	cin >> n;
	cout << "¬озведение в степень п комплексного числа и модулем r:" << endl;

	return 0;
}