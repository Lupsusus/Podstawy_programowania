// zad4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
main()
{
	struct stos
	{
		string dane;
		stos *wsk; 
	};

	stos *wierzcholek = NULL; 
	string znak;
	stos *temp; 

	string wyraz1; 
	string wyraz2; 


	for (int i = 0; i<5; i++)
	{
		temp = wierzcholek;
		wierzcholek = new stos; 

		cout << " Podaj znak: ";
		cin >> znak;
		wyraz1 += znak; 

		(*wierzcholek).dane = znak; 
		(*wierzcholek).wsk = temp; 
	}

	cout << "Elementy stosu:" << endl;
	temp = wierzcholek;

	while (temp != NULL)
	{
		cout << (*temp).dane << endl;
		temp = (*temp).wsk;
	}
	cout << endl << "Powstaly wyraz:" << endl;
	cout << wyraz1 << endl;


	temp = wierzcholek; 
	while (temp != NULL)
	{
		wyraz2 += (*temp).dane;
		temp = (*temp).wsk;
	}
	cout << endl << "Wyraz od tylu:" << endl;
	cout << wyraz2 << endl;

	if (wyraz1 == wyraz2) 
		cout << endl << "Wyraz ,," << wyraz1 << "'' jest palindromem" << endl;

	return 0;
}