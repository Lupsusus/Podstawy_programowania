//Napisz program, który wczyta liczbę naturalną n, a następnie wczytując kolejno n liczb
//naturalnych obliczy ile wśród wczytanych liczb jest takich, które: są podzielne przez 3, 2
//i niepodzielne przez 5.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 0;
	int liczba;
	int licznik = 0;
	cout << "Podaj liczbe n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Podaj liczbe: ";
		cin >> liczba;
		if (liczba % 3 == 0 && liczba % 2 == 0 && liczba % 5 != 0) {
			licznik++;
		}
	}
	cout << "Liczb pierwszych: ";
	cout << licznik;
	system("pause");

	return 0;
}

