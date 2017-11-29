// zad4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 8; // tutaj jest ile będzie miała elementów tablica (można zastąpić zwykłym cin >> n;)
	int index = 0;
	int index1 = 0;
	int codex = 0;

	double tab[n]; // <-- tablica dla wszystkich (minusy / plusy)
	double tab2[n]; // <--- tablica dla wszystkich dodatnich
	double tab3[n]; // <--- tablica dla największego ciągu dodatniego

	for (int i = 0; i<n; i++) // losowanie liczb do tablicy
		tab[i] = (-9) + (double)rand() / RAND_MAX*(9 + 9);

	for (int i = 0; i<n; i++) // wypisanie
		cout << tab[i] << "  ";

	for (int i = 0; i<n; i++)
	{
		if ((tab[i] > 0 && tab[i + 1]>0) || (tab[i]>0 && tab[i - 1] > 0))
			tab2[index++] = tab[i]; // warunek dzięki któremu zliczam wszystkie dodatnie

		else if (index>codex) // jeśli napotkam na liczbę minusową i index > codex (index pełni też rolę mojego "maxa", a codex przechowuje jego poprzednią wartość, dzięki czemu mogę porównywać to ze sobą - na początku = 0, więc puści wszystko)
		{
			for (int i = 0; i<index; i++) // wypisuje do nowej tablicy mój ciąg dodatnich dopóki nie napotkał wcześniej minusowej liczby
				tab3[i] = tab2[i];
			codex = index; // zapisuje sobie index
			index = 0; // zeruje teraz index i będę porównywał z codexem później (index>codex) <--- wyższy warunek
		}

	}

	cout << endl << endl << "FINAL BOSS:" << endl;
	if (!codex && index > 1) //<--- jeśli codex pozostał "0", czyli ciąg był np. {-1, -2, -3, 4, 5, 6} to zobaczcie, że takie rozwiązanie nie wchodzi w warunek wyższy "else if(index>codex)", bo ostatnia liczba była dodatnia (nie napotkał minusa), więc wypisuje wtedy tablicę 2 
		for (int i = 0; i<index; i++)
			cout << tab2[i] << " ";
	else for (int i = 0; i<codex; i++) // <--- tutaj nie było przypadku, że nie wbiło w pętlę "else if(index>codex) więc wypisuje mój tab3 na spokojnie
		cout << tab3[i] << " ";
	cout << endl;

	// Jeśli nie ogarniacie o co mi chodzi z warunkiem if(!codex&&index>1) to go wywalcie i polosujcie kilkanaście razy programem. Zobaczycie, że trafi się przypadek, że wasz największy ciąg będzie ostatnimi liczbami i "FINAL BOSS" wam gówno pokaże XD
	// JEŚLI "FINAL BOSS" POZOSTAJE PUSTY (NIC NIE POKAZUJE) TO ZNACZY ŻE ŻADNEGO CIĄGU DODATNIEGO NIE BYŁO!!!!!!
	// TRZEBA SOBIE DODAĆ WARUNEK, GDZIE POKAŻE WAM WIĘCEJ NIŻ 1 CIĄG, KIEDY BĘDĄ NP. DWA CIĄGI DODATNIE PO 3 LICZBY, ŻEBY TO TE DWA POKAZAŁO - JA JUŻ MAM DOSYĆ TEGO ZADANIA
	system("pause");
	return 0;
}