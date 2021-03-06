// zad12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
typedef double(*func)(double);
double fa(double x)
{
	return 2*x - 5;
}
double fb(double x)
{
	return -3 * x + 2;
}
double fc(double x)
{
	return x - 1;
}

void bisection(double a, double b, double eps, func f)
{
	if (f(a) * f(b) >= 0)
	{
		cout << "Blędne a i b" << endl;;
		return;
	}

	double c = a;
	while ((b - a) >= eps)
	{
		c = (a + b) / 2;

		if (f(c) == 0.0) {
			break;
		}
		else if (f(c)*f(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
		cout << c << endl;
	}
	cout << "Miejsce zerowe funkcji to: " << c << endl;
}

int main()
{
	double a = -100, b = 100, eps;
	cout << "Podaj przyblizenie: ";
	cin >> eps;
	bisection(a, b, eps, fa);
	bisection(a, b, eps, fb);
	bisection(a, b, eps, fc);
	system("pause");
	return 0;
}