// zad1.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//


#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char znak;
	int licznik = 0;
	int ileCyfr = 0;
	do {
		//cout << "Podaj znak: ";
		znak = _getch();
		//cout << znak << endl;
		if (znak == 0) {
			znak = _getch();
		}
		if (znak == -32) {
			znak = _getch();
		}
		if (znak >= '0' && znak <= '9') {
			ileCyfr++;
		}
		licznik++;
	} while (znak != 27);
	cout << --licznik << " znakow; " << ileCyfr << " cyfr;\n";
	system("pause");
	return 0;
}
