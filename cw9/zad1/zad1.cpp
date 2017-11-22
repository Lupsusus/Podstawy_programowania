// zad1.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
int a, b;
void wczytaj()
{
	cout << "Podaj a:";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;
}
void zamieniaj()
{
	int temp_a = a;
	int temp_b = b;

	a = temp_b;
	b = temp_a;
}
void pokazuj()
{
	cout << endl;
	cout << "Po zamienieniu:" << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}
int main()
{
	wczytaj();
	zamieniaj();
	pokazuj();
	system("pause");

	return 0;
}