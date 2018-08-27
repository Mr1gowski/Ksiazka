#include<iostream>
#include "ksiazka.h"

using std::endl;
using std::cout;
using std::cin;


int front(int z[], int d)
{
	int i = 0;
	int ujemny_zysk = z[i];
	for (i = 0; i < d; i++)
	{

		if (ujemny_zysk + z[i + 1] < 0)
		{
			ujemny_zysk += z[i + 1];
		}
		else
		{
			break;
		}

	}
	//cout << "ujemny zysk z poczatku wystepuje do " << i << endl;

	return i;
}


int back(int z[], int d)
{
	int i = 0;
	int ujemny_zysk = z[d];
	for (i = 0; i < d; i++)
	{

		if (ujemny_zysk + z[d - 1] < 0)
		{
			ujemny_zysk += z[d - 1];
			d -= 1;
		}
		else
		{
			break;
		}

	}
	//cout << "ujemny zysk z konca wystepuje do " << d << endl;
	return d;
}