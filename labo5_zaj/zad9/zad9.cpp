//Napisz program, który wczyta liczbę X oraz wyliczy i wyświetli kolejne elementy ciągu
//Fibonacciego(f0 = f1 = 1, fn + 1 = fn + fn - 1, n = 1, 2, …), które nie przekraczają wartości zmiennej X.W
//przypadku, gdy kolejny wyliczony element jest większy od zmiennej X, program powinien
//zakończyć działanie.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int fib1 = 1;
	int fib2 = 1;
	int fibo = 0;
	int n;
	cout << "Podaj liczbe max ciagu: ";
	cin >> n;
	do {
		fibo = fib1 + fib2;
		
		fib1 = fib2;
		fib2 = fibo;
		cout << fib1 << " ";
	} while (fibo < n);

	system("pause");

	return 0;
}

