//2. Napisz program wczytujący kolejne znaki z klawiatury aż do momentu naciśnięcia klawisza
//'END'.Na zakończenie zostanie wyświetlona informacja jakich znaków było więcej liter małych
//(alfabetu łacińskiego), liter dużych(alfabetu łacińskiego), cyfr czy innych znaków(przy
//	wypisywaniu wykorzystaj switch).Klawisz <END> nie jest liczony

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char znak = 0;
	char znak2 = 0;
	int ileCyfr = 0;
	int ileMalych = 0;
	int ileDuzych = 0;
	int ileInnych = 0;
	do {
		znak = getch();
		if (znak >= '0' && znak <= '9') {
			ileCyfr++;
		}
		else if (znak >= 'a' && znak <= 'z') {
			ileMalych++;
		}
		else if (znak >= 'A' && znak <= 'Z') {
			ileDuzych++;
		}
		else {
			if (znak == 0) { 
				znak2 = getch();
			}
			else if (znak == -32) {  
				znak2 = getch();
			}
			else if (znak == 224) {
				znak2 = getch();
			}
			ileInnych++;
		}
	} while (znak != 224 && znak2 != 79);
	ileInnych--;

	cout << "ileCyfr: " << ileCyfr << endl;
	cout << "ileDuzych: " << ileDuzych << endl;
	cout << "ileMalych: " << ileMalych << endl;
	cout << "ileInnych: " << ileInnych << endl;

	if (ileCyfr >= ileDuzych && ileCyfr >= ileMalych && ileCyfr >= ileInnych) {
		cout << "Najwiecej cyfr\n";
	}
	else if (ileDuzych >= ileCyfr && ileDuzych >= ileMalych && ileDuzych >= ileInnych) {
		cout << "Najwiecej duzych liter\n";
	}
	else if (ileMalych >= ileDuzych && ileMalych >= ileCyfr && ileMalych >= ileInnych) {
		cout << "Najwiecej malych liter\n";
	}
	else if (ileInnych >= ileDuzych && ileInnych >= ileMalych && ileInnych >= ileCyfr) {
		cout << "Najwiecej innych znakow\n";
	}
	system("pause");
	return 0;
}
