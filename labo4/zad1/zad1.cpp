//1. Napisz program wczytujący kolejne znaki z klawiatury aż do momentu naciśnięcia klawisza
//'ESC'.W trakcie wczytywania należy zliczać ilość podanych znaków.
//Na zakończenie należy wyświetlić informacje :
//* - ile było podanych znaków(przed naciśnięciem 'ESC'),
//* - ile z tych znaków było cyframi.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char znak;
	int licznik = 0;
	int ileCyfr = 0;
	do {
		znak = _getch();
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