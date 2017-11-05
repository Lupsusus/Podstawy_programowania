//1.	Dana jest tablica jednowymiarowa n - elementowa.Napisz program, który
//znajduje :
//•	Element minimalny,
//•	Średnią,
//•	Medianę.
//2. Dana jest tablica dwuwymiarowej o wymiarach NxN.Napisz program,
//który obliczy średnią spośród elementów :
//•	całej tablicy,
//•	głównej przekątnej,
//•	każdego wiersza osobno,
//•	każdej kolumny osobno.
//
//3.	Dana jest tablica dwuwymiarowa prostokątna o wymiarach nxm liczb
//rzeczywistych.Napisz program, który policzy stosunek sumy elementów
//wewnętrznych do zewnętrznych.
//4.	Dana jest tablica napisów.W każdym napisie jest jedno zdanie.Napisz
//program, który zmieni te napisy w ten sposób, że pierwszy znak napisu
//będzie pisany dużą literą, skrajne znaki odstępu będą usunięte a dwu lub
//więcej – krotne wystąpienia znaków odstępu będą zamieniane na pojedyncze
//znaki odstępu.
//5.	Dana jest tablica znaków.Napisz program, który zliczy i wypisze
//liczby wystąpień kolejnych małych i dużych liter(na wyjściu podajemy
//	liczbę litery ‘a’, ‘b’, …, ‘A’, ‘B’, …, ’Z’.
//	6.	Dana jest tablica kwadratowa nxn liczb rzeczywistych.Napisz program,
//	który:
//•	sprawdzi, czy tablica jest symetryczna,
//•	Policzy sumę elementów w macierzy lewej dolnej trójkątnej(bez
//	diagonali) i prawej dolnej(z diagonalą),
//	•	Po podaniu indeksów[i][j] policzy sumę elementów sąsiednich.
//	7.	Duża liczba(n cyfrowa)  jest zapisana w n elementowej tablicy liczb
//	naturalnych(w każdym elemencie tablicy jest jedna cyfra).Napisz
//	program sprawdzający czy podana liczba jest podzielna przez 11.
//	Uwaga !
//	Jeżeli różnica pomiędzy sumą cyfr stojących na miejscach
//	nieparzystych(licząc od prawej) i sumą cyfr stojących na miejscach
//	parzystych jest liczbą podzielną przez 11 to i badana liczba jest
//	podzielna przez 11.
//	Przykład:
//61974 (4 + 9 + 6) - (7 + 1) = 19 - 8 = 11.
//8.	Napisz program, który :
//	•	utworzy tablicę 5 x 5 liczb rzeczywistych i wypełni ją losowymi
//	wartościami z zakresu[0, 10].
//	•	dla każdej kolumny wyznaczy jej minimum i maksimum.
//	•	wyznaczy trzy największe liczby na lewej przekątnej.
//	•	wyznaczy trzy największe liczby na prawej przekątnej.
//	Wszystkie wyznaczone wartości wraz z wygenerowaną tablicą mają zostać
//	wyświetlone na ekranie.
//	9. Załóżmy, że tablica 100 elementowa jest wypełniona zerami i
//	jedynkami reprezentuje kulki białe(0) i czerwone(1).Napisz program,
//	który przedstawia kulki w tablicy tak, by najpierw były kulki czerwone,
//	potem białe.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int min;
	int k = 0;
	int j = 0;
	int pom;
	min = 0;
	float sr = 0;
	int const n = 5;
	int T[n];
	for (int i = 0; i < n; i++) {
		cout << "Podaj " << i + 1 << " wartosc elementu: " << endl;
		cin >> T[i];
		if (i == 0) {
			min = T[i];
		}
		else if (T[i] < min) {
			min = T[i];
		}
		sr = sr + T[i];
	}
	sr = sr / n;
	for (int i = 0; i < n; i++) {
		for (j = k; j < n - (i + 1); j++) 
		{
			if (T[j + 1] < T[j])
			{
				pom = T[j + 1]; 
				T[j + 1] = T[j];
				T[j] = pom;
			}
		}
		for (k = j - 1; k > i; k--)
		{
			if (T[k] < T[k - 1])
			{
				pom = T[k];
				T[k] = T[k - 1];
				T[k - 1] = pom;
			}
		}
		k++;
	}
	for (int i = 0; i < n; i++) {
		cout << T[i] << " ";
	}
	if (T[n] % 2 == 0) {
		int w = T[n / 2];
		cout << "Mediana: " << w;
	}
	else {
		int k = T[n / 2];
		int w = T[n / 2 + 1];
		cout << "Mediana: " << k + w / 2;
	}
	cout << endl;
	cout << min << endl;
	cout << sr << endl;
	system("pause");
	return 0;
}

