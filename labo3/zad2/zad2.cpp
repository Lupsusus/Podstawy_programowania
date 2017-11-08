#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	int x0, y0, r; // wspolrzedne kola
	int x, y;
	srand(time(NULL));

	cout << "Podaj wspolrzedna kola (x):";
	cin >> x0;
	cout << "Podaj wspolrzedna kola (y):";
	cin >> y0;
	cout << "Podaj promien kola:";
	cin >> r;

	int n;
	cout << "N punktow:"; //dla ilu takich punktow ma byc sprawdzone
	cin >> n;

	//losuje liczby x i y
	for (int i = 0; i<n; i++) // petla od sprawdzania
	{
		x = rand() % 10 + (-5);
		y = rand() % 10 + (-5);
		cout << "X:" << x << endl;
		cout << "Y:" << y << endl;

		int wynik; //wzor na sprawdzenie tego punktu: (x-a)^2 + (y-b)^2 <= r^2, gdzie (a,b) to wspolrzedne srodka, czyli nasze x0 i y0
		if (wynik = (x - x0)*(x - x0) + (y - y0)*(y - y0) <= r*r) cout << "Punkt nalezy do kola!" << endl;
		else cout << "Punkt nie nalezy do kola!" << endl;
	}


	system("pause");
	return 0;
}