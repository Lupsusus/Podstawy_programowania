//6. Dane są dwa napisy.Napisz program, który porówna te dwa napisy
//w poszukiwaniu pierwszych identycznych znaków i policzy ile jest znaków, które się pokrywają.
//Na koniec program wypisze podciąg, który został znaleziony.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;


int main()

{
	string w1, w2, wsp;
	int  i = 0, j = 0, k = 0, il;
	cout << "Podaj pierwszy ciag" << endl;
	getline(cin, w1);
	cout << "drugi" << endl;
	getline(cin, w2);

	for (i = 0; i<w2.length(); i++)
		for (j = 0; j<w1.length(); j++)
		{

			if (w2[i] == w1[j])

			{

				if (wsp[k] != w2[i])
				{
					wsp = wsp + w2[i];
					il++;
				}
				for (k = 0; k<wsp.length(); k++)
				{

					if (wsp[k] == wsp[k + 1])
					{
						wsp.erase(k, 1);
						il--;

					}
				}
			}

		}
	cout << "Znaki pokrywające się to " << wsp << " jest ich " << il << endl;
	system("pause");
	return 0;
}
