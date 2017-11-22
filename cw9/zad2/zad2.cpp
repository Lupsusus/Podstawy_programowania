//Napisz program, który zapisuje wartości funkcji f(x)=2x-5 do tablicy n-elementowej dla x
//zakresu <-2,6>. Wypisz otrzymaną tablicę. n – podaje użytkownik, liczba z przedziału (0,20>.
//Do zapisania wartości f(x) w tablicy i wypisania zawartości tablicy zdefiniuj odpowiednie
//funkcje.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
void czytaj()
{

	int n;
	int x;
	cout << "Podaj n: ";
	cin >> n;
	int     funkcja[n];
	srand(time(NULL));
	for (int i = 0; i<n; i++)
	{
		x = rand() % 8 + (-2);
		funkcja[i] = 2 * x - 5;
		cout << "x: " << x << "  " << "funkcja: " << funkcja[i] << endl;
	}
}

int main() {
	czytaj();

	system("pause");
	return 0;
}