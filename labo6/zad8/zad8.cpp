// zad8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	int m;

	cout << "Podaj n-elementow:";
	cin >> n;
	cout << "Podaj m-elementow:";
	cin >> m;

	int tab[n][m];

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			tab[i][j] = rand() % 19 + (-9);

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			cout << tab[i][j] << "    ";
		cout << endl;
	}

	int tab1[n*m]; // tablica większych od zera
	int tab2[n*m]; // mniejszych o zera
	int tab3[n*m]; // dla samych zer
	int index = 0; // licznik dla większych (tab1)
	int codex = 0; // licznik dla mniejszych (tab2)
	int modex = 0; // licznik dla zer (tab3)

				   // czemu [n*m]? a no dlatego, że nie wiem ile będzie tych większych, bądź mniejszych. A co jak wszystkie będą? Dlatego potrzebuje maksymalnego rozmiaru.

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
		{
			if (tab[i][j]>0) tab1[index++] = tab[i][j];
			else if (tab[i][j]<0) tab2[codex++] = tab[i][j];
			else if (tab[i][j] == 0) tab3[modex++] = tab[i][j];
		}

	cout << endl << "WIEKSZE OD ZERA:" << endl;
	for (int i = 0; i<index; i++)
		cout << tab1[i] << "  ";

	cout << endl << "MNIEJSZE OD ZERA:" << endl;
	for (int i = 0; i<codex; i++)
		cout << tab2[i] << "  ";

	cout << endl << "ZERA (o ile wystepuja):";
	for (int i = 0; i<modex; i++)
		cout << tab3[i] << "  ";
	cout << endl;


	system("pause");

	return 0;
}