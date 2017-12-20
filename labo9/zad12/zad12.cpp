// zad12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

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

void bisectiona(double a, double b, double eps)
{
	if (fa(a) * fa(b) >= 0)
	{
		cout << "Blędne a i b" << endl;;
		return;
	}

	double c = a;
	while ((b - a) >= eps)
	{
		c = (a + b) / 2;

		if (fa(c) == 0.0) {
			break;
		}
		else if (fa(c)*fa(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
		cout << c << endl;
	}
	cout << "Miejsce zerowe funkcji a) to: " << c << endl;
}

void bisectionb(double a, double b, double eps)
{
	if (fb(a) * fb(b) >= 0)
	{
		cout << "Blędne a i b" << endl;;
		return;
	}

	double c = a;
	while ((b - a) >= eps)
	{
		c = (a + b) / 2;

		if (fb(c) == 0.0) {
			break;
		}
		else if (fb(c)*fb(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
		cout << c << endl;
	}
	cout << "Miejsce zerowe funkcji b) to: " << c << endl;
}

void bisectionc(double a, double b, double eps)
{
	if (fc(a) * fc(b) >= 0)
	{
		cout << "Blędne a i b" << endl;;
		return;
	}

	double c = a;
	while ((b - a) >= eps)
	{
		c = (a + b) / 2;

		if (fc(c) == 0.0) {
			break;
		}
		else if (fc(c)*fc(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
		cout << c << endl;
	}
	cout << "Miejsce zerowe funkcji c) to: " << c << endl;
}

int main()
{
	double a = -100, b = 100, eps;
	cout << "Podaj przyblizenie: ";
	cin >> eps;
	bisectiona(a, b, eps);
	bisectionb(a, b, eps);
	bisectionc(a, b, eps);
	system("pause");
	return 0;
}