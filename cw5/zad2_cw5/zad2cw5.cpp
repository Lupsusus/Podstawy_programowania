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
			cin >> T[i][j]; 
			csr = csr + T[i][j]; 
			el_licz++;
		}
	}
	csr = csr / el_licz; 
	el_licz = 0;
	for (int i = 0; i < n; i++) {
		psr = psr + T[i][el_licz]; 
		el_licz++;
	}
	psr = psr / el_licz; 
	el_licz = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << T[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Srednia calej tablicy to " << csr << endl;
	cout << "Srednia glownej przekatnej to " << psr << endl;
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) {
			wsr = wsr + T[i][j]; 
			el_licz++;
		}
		wsr = wsr / el_licz;
		cout << "Srednia wiersza " << i << " to " << wsr << endl;
		wsr = 0;
		el_licz = 0;
	}
	for (int j = 0; j < n; j++) { 
		for (int i = 0; i < n; i++) {
			ksr = ksr + T[i][j]; 
			el_licz++; 
		}
		ksr = ksr / el_licz; 
		cout << "Srednia kolumny " << j << " to " << ksr << endl; 
		ksr = 0;
		el_licz = 0;
	}
	system("pause");
	return 0;
}

