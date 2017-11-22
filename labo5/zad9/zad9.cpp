// zad9.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;


int main()
{
	int fib[10000];
	int x;
	fib[0] = 1; // 1 wyraz ciagu fibonacciego
	fib[1] = 1; // 2 wyraz ciagu fibonacciego

	cout << "Podaj X:";
	cin >> x;

	for (int i = 2; i<x; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		// wyraz aktualny = wyraz poprzedni + wyraz jeszcze poprzedni
	}

	for (int i = 0; i<x; i++)
	{
		if (fib[i] <= x) cout << fib[i] << endl;
	}
	// jesli wyraz w ciagu jest mniejszy od X no to wypisujemy
	system("pause");
	return 0;
}