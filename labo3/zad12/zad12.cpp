#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include <time.h>

using namespace std;


int main()
{
	cout << "Ten program wczytuje od uzytkownika temperature." << endl;
	int celcjusz;
	cout << "Podaj temperature w Celcjuszu:";
	cin >> celcjusz; // wprowadzenie celcjusza
	double fahrenheit = (double)celcjusz*1.8 + 32; // wzor na zamiane celcjusza w fahrenheita
	cout << "Po zamianie na fahrenheity: " << fahrenheit;

	// w przykładzie b) we wzorze daje: celcjusz=5/9*(fahrenheit-32)
	system("pause");
	return 0;
}