// zad2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;

	cout << "Podaj n-elementow:";
	cin >> n;

	int tab[n];

	for (int i = 0; i < n; i++)
		tab[i] = rand() % 10;
	for (int i = 0; i < n; i++)
		cout << tab[i] << " ";

	cout << endl << "WYJSCIE (podzielne przez 3 indexy):" << endl;
	for (int i = 0; i < n; i++)
		if (i % 3 == 0)
			cout << tab[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}