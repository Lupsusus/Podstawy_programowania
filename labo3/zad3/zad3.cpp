// zad3.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int x, y, n;
	float x0, y0, a, b, wynik;
	cout << "Podaj ilosc n: ";
	cin >> n;
	cout << "Podaj wspolrzedne lewego dolnego puntu (x): ";
	cin >> x0;
	cout << "Podaj wspolrzedne lewego dolnego puntu (y): ";
	cin >> y0;
	cout << "Podaj dlugosc boku a: ";
	cin >> a;
	cout << "Podaj dlugosc boku b: ";
	cin >> b;
	srand(time(NULL));
	for (int i = 0; i<n; i++)
	{
		x = rand() % 21 + (-10);
		y = rand() % 21 + (-10);
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;

		if ((x0 <= x) && (x0 + a >= x) && (y0 <= y) && (y0 + b >= y))
		{
			cout << "Punkt nalezy do prostokata!!!" << endl;
			cout << endl;
			cout << endl;
		}
		else
		{
			cout << "Punkt nie nalezy do prostokata!!!" << endl;
			cout << endl;
			cout << endl;
		}
	}
	system("pause");
	return 0;
}