// Lab_03_1.cpp
// < �������� ����������>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 28
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;


	A = (x * x)/(2.1 + sin(abs(x)));
	// ����� 1: ������������ � ��������� ����
	if (x <= -5)
		B = 1 / tan(exp(x));
	if (-5 < x && x < 0)
		B = 2 - (x * x * x)/(abs(x)+1);
	if (x >= 0)
		B = log(sqrt(abs(x) - (x * x) / 2.0 + 1e-6)); 
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= -5)
		B = 1 / tan(exp(x));
	else
		if (x >= 0)
			B = log(sqrt(abs(x) - (x * x) / 2.0 + 1e-6));
		else
			B = 2 - (x * x * x) / (abs(x) + 1);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}