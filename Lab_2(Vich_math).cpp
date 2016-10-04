/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ����� �������� ��������� �������� ����� ������� � ��������� ��� �������� �� main
 main_1		�� ������ ����������� �������;
 main_2		�� ������ ���� (�������);
 main_3		�� ������ ����������� (�������);
 main_4		�� ������ ������� �������� (���������������� �����������). - �� ������ � ������
 */
#include "stdafx.h"
#include "iostream"
#include "cmath"
#include "stdio.h"
#include "conio.h"
using namespace std;

double f(double x)	// ������� f(x)
{
	return 1 - 4 * x - log(x);
}
double f_(double x)	//	����������� ������� f(x) ��� ������ �����������
{
	return  - 4 - 1/(x);
}
int main_1(double x) //1		�� ������ ����������� �������;
{
	//setlocale(LC_ALL, "RUSSIAN");
	const double eps = 0.001;
	double a = 1, b = 2;
	//for (int k = 1; k < 6; k++)
	//{
		do
		{
			x = (a + b) / 2;
			if (f(a)*f(x) < 0) b = x;
			else a = x;
			cout << x << endl;
		} while (fabs(f(x)) > eps);
	//}
	_getch();
    return 0;
}
int main_2(double x) //2		�� ������ ���� (�������);
{
	const double eps = 0.001;
	double a = 1, b = 2, c = 0;
	x = b; c = a;
	for (int k = 0; k < 6; k++)
	{
		do
		{
			x = x - f(x)*(x-c)/(f(x)-f(c));
			cout << x << endl;
		} while (f(x) > eps);
	}
	_getch();
	return 0;
}

int main_3(double x) //3		�� ������ ����������� (�������);
{
	const double eps = 0.001;
	double a = 1;
	x = a;
	//for (int k = 0; k < 6; k++)
	//{
		do
		{
			x = x - f(x)/f_(x);
			cout << x << endl;
		} while (f(x) >= eps);
	//}
	_getch();
	return 0;
}

int main_4(double x) //4	�� ������ ������� �������� (���������������� �����������).
{
	const double eps = 0.001;
	double a = 1;
	x = a;
	//for (int k = 0; k < 6; k++)
	//{
	do
	{
		x = x;
		cout << x << endl;
	} while (f(x) >= eps);
	//}
	_getch();
	return 0;
}

