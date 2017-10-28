//3.	Dana jest tablica dwuwymiarowa prostokątna o wymiarach nxm liczb
//rzeczywistych.Napisz program, który policzy stosunek sumy elementów
//wewnętrznych do zewnętrznych.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	float zsum = 0, wsum = 0, /*zlicz = 0, wlicz = 0,*/ wynik = 0;
	const int n = 4;
	const int m = 4;
	float  T[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Podaj [" << i << "][" << j << "]" << endl;
			cin >> T[i][j]; // podaje wartosci do tablicy; i - wiersz; j - kolumna
		}
	}
	for (int j = 0; j < m; j++) { // sumuje wartosc elementow z pierwszego wiersza i dodaje do zmiennej sum 
		zsum = zsum + T[0][j];
		//zlicz++; //licze ilosc
	}
	for (int j = 0; j < m; j++) { // sumuje wartosc elementow z ostatniego wiersza i dodaje do zmiennej sum
		zsum = zsum + T[n-1][j];
		//zlicz++; //licze ilosc
	}
	for (int i = 1; i < n - 1; i++) { // dla kazdego wiersza z pominieciem pierwszego i ostatniego sumuje wartosci pierwszego i ostatniego elementu
		zsum = zsum + T[i][0]; // pierwszy
		zsum = zsum + T[i][m-1]; // ostatni
		//zlicz = zlicz + 2; //licze ilosc
	}
	for (int i = 1; i < n - 1; i++) { // dla kazdego wiersza z pominieciem pierwszego i ostatniego sumuje wszystkie wartosci elemntow oprocz pierwszego i ostatniego (czyt. licze wewnetrzne)
		for (int j = 1; j < m - 1; j++){
		wsum = wsum + T[i][j];
		//wlicz++; //licze ilosc
		}
	}
	wynik = wsum / zsum;
	cout << zsum << "/" << wsum << "=" << wynik << endl;
	system("pause");
	return 0;
}

