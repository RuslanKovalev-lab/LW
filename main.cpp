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
	cout << "�������� ������ ������������� �� ��������� � ��������������:" << endl << "u=" << u << endl << "z=" << z << endl;
	cout << "�������� ������ ������������ �����������:" << endl << "v=" << v << endl;
	cout << "������� �������� v= " << v.Getcomplex() << endl;
	z.SetComplex(3, 7);
	cout << "������� ����� �������� z= " << z.Getcomplex() << endl;
	cout << "������� �������� ������������ ����� z(re)= " << z.GetRe() << endl;
	cout << "������� �������� ������ ����� z(im)= " << z.GetIm() << endl;
	u = z;
	cout << "�������� ������ ��������� ������������:" << endl << "u=" << u << endl;
	u = z + v;
	cout << "�������� ������ ��������� ��������:" << endl << "u=" << u << endl;
	u = z - v;
	cout << "�������� ������ ��������� ���������:" << endl << "u=" << u << endl;
	u = z * v;
	cout << "�������� ������ ��������� ������������:" << endl << "u=" << u << endl;
	u = z / v;
	cout << "�������� ������ ��������� ��������:" << endl << "u=" << u << endl;
	f = (u == z);
	cout << "�������� ������ ��������� ���������:" << endl << "f=" << f << endl;
	cout << "�������� ������ ������ ������������ �����:" << "\n" << "abs(u)=" << u.abs() << "\n";
	double r = u.abs();
	cout << "������� ������� ������������ �����:" << endl;
	cin >> n;
	cout << "���������� � ������� � ������������ ����� � ������� r:" << endl;

	return 0;
}