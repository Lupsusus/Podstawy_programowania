// zad11.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int a, b, n;
	cout << "Podaj wspolczynnik A:";
	cin >> a;
	cout << "Podaj wspolczynnik B:";
	cin >> b;
	cout << "Podaj ilosc punktow (n):";
	cin >> n;
	int tab_x[n]; // w sumie to moglem zapisac x[n]
	int tab_y[n]; // y[n] bo ladniej na dole we wzorach wygladaloby xd

	for (int i = 0; i<n; i++)
	{
		tab_x[i] = rand() % 9 + 1;
		tab_y[i] = rand() % 9 + 1;
	}
	for (int i = 0; i<n; i++)
	{
		cout << i + 1 << ") " << "Punkt: (" << tab_x[i] << "," << tab_y[i] << ") ";
		if (tab_y[i]<a*tab_x[i] + b) cout << "znajduje sie ponizej osi!";
		else if (tab_y[i]>a*tab_x[i] + b) cout << "znajduje sie powyzej osi!";
		else if (tab_y[i] = a*tab_x[i] + b) cout << "znajduje sie na osi!";
		cout << endl << endl;
	}
	//y<ax+b poniżej osi
	//y>ax+b powyżej osi
	//y=ax+b na osi
	system("pause");
	return 0;

}