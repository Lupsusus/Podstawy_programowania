// zad1.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Podaj n:";
	cin >> n;

	float a;
	cout << "Podaj a:";
	cin >> a;

	float r;
	cout << "Podaj r:";
	cin >> r;

	float z = a;
	float suma = a;

	cout << "Liczby: " << a << "--";
	for (int i = 1; i<n; i++)
	{
		z += r;
		cout << z << "--";
		suma += z;
	}

	cout << endl;

	cout << "Suma: " << suma;
	system("pause");
	return 0;
}