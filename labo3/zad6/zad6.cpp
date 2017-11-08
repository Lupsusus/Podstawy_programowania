// zad6.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

	int n = 2; //stopien wielomianu
	int t[3] = { 1, 2, -1 }; //wspolczynniki, np. x^2+2x-1
	int x = 2; //punkt dla ktorego liczymy wartosc wielomianu

	int i;
	int w = 0;
	for (i = 0; i <= n; i++) {
		w *= x;
		w += t[i];
	}

	cout << "Wynik: " << w;
	system("pause");
	return 0;

}