#include <iostream>
#include "ksiazka.h"

using std::endl;
using std::cout;
using std::cin;
int liczba_koncertow;




int main()
{
	cin >> liczba_koncertow;
	int *szacowany_przychod = new int[liczba_koncertow];
	for (int i = 0; i < liczba_koncertow; i++)
	{
		cin >> szacowany_przychod[i];
	}
	
	
	int max = szacowany_przychod[front(szacowany_przychod, liczba_koncertow)+1];
	for (int i = front(szacowany_przychod, liczba_koncertow)+1; i <back(szacowany_przychod, liczba_koncertow)+1;  i++)
			max += szacowany_przychod[i+1];
	//TODO dodac porownywanie wynikow 
	

	if (max>0)
		cout << max;
	else
	{
		max = 0;
		cout << max;
	}
	

	return 0;
}
