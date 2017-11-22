// zad1.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void zamien(int *x, int *y) {
	int temp =0;
	temp = *x;
	*x = *y;
	*y = temp;

}

int main()
{
	int a, b;
	cout << "podaj a: ";
	cin >> a;
	cout << "podaj b: ";
	cin >> b;
	int *c = &a;
	int *d = &b;
	zamien(c, d);
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}

