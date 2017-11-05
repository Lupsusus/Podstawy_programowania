//Dany jest zbiór polskich miast wraz ze współrzędnymi podanymi w
//układzie 0XY, gdzie x oznacza odległość w kilometrach od Warszawy w
//kierunku osi X a y odległość w kilometrach od Warszawy w kierunku osi Y.
//Napisz program, który wypisze miasta najbardziej odległe od siebie.Nie
//uwzględniamy efektów związanych z krzywizną ziemi.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include <math.h>
using namespace std;

struct miasta
{
	std::string nazwa;
	int x;
	int y;
};



int main()
{
	miasta tablica[100];
	int n;
	cout << "Ile miast chcesz podac?";
	cin >> n;

	for (int i = 0; i<n; i++)
	{
		cout << "Podaj nazwe:";
		cin >> tablica[i].nazwa;
		cout << "Podaj odleglosc X:";
		cin >> tablica[i].x;
		cout << "Podaj odleglosc Y:";
		cin >> tablica[i].y;
	}
	float wynik[100];
	float max = 0;
	string miasto1, miasto2;
	for (int i = 0; i<n; i++) 
	{
		cout << endl << "Dla " << i + 1 << " miasta: ";
		for (int j = 0; j<n - 1; j++) 
		{
			if (tablica[i].nazwa != tablica[j + 1].nazwa) wynik[j] = (tablica[i].x - tablica[i].y)*(tablica[i].x - tablica[i].y) + (tablica[j + 1].x - tablica[j + 1].y)*(tablica[j + 1].x - tablica[j + 1].y);
			cout << sqrt(wynik[j]) << "  "; 
			if (max<sqrt(wynik[j]))
			{
				max = sqrt(wynik[j]);
				miasto1 = tablica[i].nazwa;
				miasto2 = tablica[j + 1].nazwa;
			}
		}
		cout << endl;

	}
	cout << endl << "MAX: " << max;
	cout << endl << miasto1 << "-" << miasto2;
	system("pause");
	return 0;
}