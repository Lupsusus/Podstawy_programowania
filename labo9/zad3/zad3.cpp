#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <cstdlib>
using namespace std;

#define M_PI 3.14159265358979323846
int main()
{
	int n;
	long double *tab;
	cout << "Podaj n: ";
	cin >> n;

	tab = new long double[n];


	long double liczba;
	srand(time(NULL));
	for (int i = 0; i<n; i++)
	{
		liczba = (rand() / (RAND_MAX + 1.0))* (2*M_PI - 0) + 0;
		tab[i] = liczba;
	}

	cout << "W radianach: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
	cout << "W stopniach: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] * (180 / M_PI) << " ";
	}


	system("pause");
	return 0;
}