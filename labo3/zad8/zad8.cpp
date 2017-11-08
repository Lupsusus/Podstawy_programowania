// zad8.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	double const eps = 0.0001; // wprowadzam tą dokładność eps
	double x;
	cout << "Podaj x:";
	cin >> x;

	int n = 1; // muszę jakoś tą silnie liczyć, więc zaaczynam od 1 (bo kolejne silnie będą nieparzyste)
	double a = x; //mój pierwszy wyraz to jest po prostu x
	double suma = 0;

	while (fabs(a)>eps) // fabs(a) ---> wartość bezwzględna
	{
		suma += a;
		a = (-a)*((x*x) / (n*(n + 1))); //mnoze 1 wyraz przez kolejny i tak w kolko, tzw. kolejne wyrazy w ciagu tak licze
		n += 2; //tutaj moja silnia sie nadbija
	}
	cout << "Wartosc funkcji z dokladnoscia eps:" << suma << endl;

	system("pause");
	return 0;
}