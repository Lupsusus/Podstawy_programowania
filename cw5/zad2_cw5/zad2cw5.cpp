//2. Dana jest tablica dwuwymiarowej o wymiarach NxN.Napisz program,
//który obliczy średnią spośród elementów :
//•	całej tablicy,
//•	głównej przekątnej,
//•	każdego wiersza osobno,
//•	każdej kolumny osobno.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	float csr = 0, psr = 0, wsr = 0, ksr = 0;
	int el_licz = 0;
	const int n = 4;
	float  T[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Podaj [" << i << "][" << j << "]" << endl;
			cin >> T[i][j]; //wpisuje dane do tablicy
			csr = csr + T[i][j]; // obliczam sume elementow
			el_licz++; // obliczam ilosc elementow
		}
	}
	csr = csr / el_licz; // licze srednia
	el_licz = 0; // zeruje licznik
	for (int i = 0; i < n; i++) {
		psr = psr + T[i][el_licz]; //sumuje elementy przekatnej
		el_licz++; // i ilosc elementow
	}
	psr = psr / el_licz; // licze srednia przekatnej 
	el_licz = 0;
	cout << "Srednia calej tablicy to " << csr << endl;
	cout << "Srednia glownej przekatnej to " << psr << endl;
	for (int i = 0; i < n; i++) { // dla kolejnego wiersza
		for (int j = 0; j < n; j++) {
			wsr = wsr + T[i][j]; // sumuje wszystkie jego elementy
			el_licz++; // licze ich ilosc
		}
		wsr = wsr / el_licz; //licze srednia
		cout << "Srednia wiersza " << i << " to " << wsr << endl; // wypisuje i lece od nowa dla kolejnego wiersza
		wsr = 0;
		el_licz = 0;
	}
	for (int j = 0; j < n; j++) { //dla kolejnej kolumny 
		for (int i = 0; i < n; i++) {
			ksr = ksr + T[i][j]; // sumuje jej elementy
			el_licz++; // ilosc
		}
		ksr = ksr / el_licz; // srednia
		cout << "Srednia kolumny " << j << " to " << ksr << endl; // wypisuje i od nowa
		ksr = 0;
		el_licz = 0;
	}
	system("pause");
	return 0;
}

