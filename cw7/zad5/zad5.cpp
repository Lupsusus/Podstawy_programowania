//5. Współczynniki wielomianu zapisane są w postaci stosu, gdzie na
//wierzchołku znajduje się liczba an(przy n - tej potędze).Napisz program
//obliczania wartości tego wielomianu dla dowolnego x = x0.Skorzystaj ze
//schematu Hornera.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int *T;         // tworzymy wskaźnik
	int i, n, x, temp;
	x = 0;
	cout << "Podaj najwieksza potege wielomianu:";
	cin >> n;        // odczytujemy ilość komórek
	T = new int[n];  // tworzymy tablicę dynamiczną o n komórkach
	for (i = 0; i <= n; i++)
	{
		cout << "Podaj wspolczynnik potegi " << i << ": ";
		cin >> T[i];   // wczytujemy kolejne komórki
	}
	cout << "Podaj x dla ktorego ma zostac wyznaczona wartosc wielomianu: ";
	cin >> x;
	temp = T[n];
	cout << "Stos: " << endl;
	cout << T[n] << endl;
	for (i = n-1; i >= 0; i--)
	{
		cout << T[i] << endl; //wypisuje kolejne elementy stosu
		temp = x*temp + T[i]; //wykonuje kolejne dzialania ze schematu hornera
	}
	cout << "Wynik: " << endl;
	cout << temp << endl;
	system("pause");
    return 0;
}

