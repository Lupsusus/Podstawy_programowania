//8.	Napisz program, który:
//•	utworzy tablicę 5 x 5 liczb rzeczywistych i wypełni ją losowymi
//wartościami z zakresu[0, 10].
//•	dla każdej kolumny wyznaczy jej minimum i maksimum.
//•	wyznaczy trzy największe liczby na lewej przekątnej.
//•	wyznaczy trzy największe liczby na prawej przekątnej.
//Wszystkie wyznaczone wartości wraz z wygenerowaną tablicą mają zostać
//wyświetlone na ekranie.

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	const int n = 5;
	int tab[n][n], j, i, max = 0, min = 0;
	srand(time(NULL));
	// losuje liczby i wypisuje je na ekranie
	for (i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			tab[i][j] = 0 + 10.0*rand() / (RAND_MAX);
		}
	}
	for (i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	i = 0;
	j = 0;
	for (int j = 0; j < n; j++) { //dla kolejnej kolumny 
		for (int i = 0; i < n; i++) {
			if (tab[i][j] > max) {
				max = tab[i][j];
			}
			if (min == 0) {
				min = tab[i][j];
			}
			if (tab[i][j] < min) {
				min = tab[i][j];
			}
		}
		cout << "Dla kolumny " << j << " max to: " << max << " a min to: " << min << endl;
		max = 0;
		min = 0;
	}
	max = 0;
	int maxx = 0;
	int maxxx = 0;
	int pom1 = 0;
	int pom2 = 0;
	for (int i = 0; i < n; i++) {
		if (tab[i][i] > max) {
			pom1 = max;
			max = tab[i][i];
			pom2 = maxx;
			maxx = pom1;
			maxxx = pom2;
		}
		else if (tab[i][i] > maxx) {
			pom1 = maxx;
			maxx = tab[i][i];
			maxxx = pom1;
		}
		else if (tab[i][i] > maxxx) {
			maxxx = tab[i][i];
		}
	}
	cout << "Dla lewej przekatnej maxy to: " << max << " " << maxx << " " << maxxx << endl;

		system("pause");
	return 0;
}

