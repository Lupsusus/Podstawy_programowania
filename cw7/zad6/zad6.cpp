#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

//Napisz program, w którym stworzysz dynamiczną dwuwymiarową tablicę
//liczb rzeczywistych o wymiarach podanych przez użytkownika.Następnie
//wypełnij ją losowymi liczbami z przedziału[0, 50].Stwórz tablicę
//jednowymiarową o odpowiedniej ilości wierszy i przepisz do niej te
//liczby, które są większe od 25. W przypadku braku takich liczb powinien
//zostać wyświetlony odpowiedni komunikat.

int main()
{
	srand(time(nullptr));

	int wymiar1, wymiar2;
	cout << "Podaj pierwszy wymiar: ";
	cin >> wymiar1;

	cout << endl << endl << "Podaj drugi wymiar: ";
	cin >> wymiar2;

	double **tablica = new double*[wymiar1];
	for (int i = 0; i < wymiar1; i++)
		tablica[i] = new double[wymiar2];

	for (int i = 0; i < wymiar1; i++)
		for (int j = 0; j < wymiar2; j++)
			tablica[i][j] = (double)rand() / RAND_MAX * 50;

	for (int i = 0; i < wymiar1; i++)
		for (int j = 0; j < wymiar2; j++)
			cout << tablica[i][j] << endl;

	double *tablica2 = new double[wymiar1*wymiar2];
	int index = 0;

	for (int i = 0; i < wymiar1; i++)
		for (int j = 0; j < wymiar2; j++)
			if (tablica[i][j] > 25)
				tablica2[index++] = tablica[i][j];

	cout << endl << endl << "Sprawdzanie wystapienia liczb wiekszych od 25." << endl << endl;

	if (index > 0)
		for (int i = 0; i < index; i++)
			cout << tablica2[i] << endl;
	else cout << endl << "Nie znaleziono liczb rzeczywistych wiekszych od 25." << endl;

	cout << endl << "Koniec programu." << endl << endl;
	return 0;
}