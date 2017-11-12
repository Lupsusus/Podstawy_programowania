//10. Napisz program, który utworzy stos zawierający liczby całkowite
//podane przez użytkownika.
//Podanie zera kończy wprowadzanie danych.Sprawdź, czy stos zawiera
//element o wartości podanej przez użytkownika,
//same parzyste liczby

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int *T;         // tworzymy wskaźnik
	int i, n;
	cout << "Podaj najwieksza potege wielomianu:";
	cin >> n;        // odczytujemy ilość komórek
	T = new int[n];  // tworzymy tablicę dynamiczną o n komórkach
	for (i = 0; i <= n; i++)
	{
		cout << "Podaj wspolczynnik potegi " << i << ": ";
		cin >> T[i];   // wczytujemy kolejne komórki
	}
	system("pause");
    return 0;
}

