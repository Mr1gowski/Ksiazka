#include <iostream>
#include"stock00.h"
const int Arsize = 10;
const int Maxlen = 81;



int main()
{

	using std::cout;
	using std::cin;
	using std::endl;

	String name;
	cout << "czesc jak masz na imie?\n";
	cin >> name;
	cout << name << ", wpisz do " << Arsize
		<< " krotkich powiedzonek (pusty wiersz konczy)\n";
	String sayings[Arsize];
	char temp[Maxlen];
	int i;
	for ( i = 0; i < Arsize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, Maxlen);
		while (cin&&cin.get()!='\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total>0)
	{
		cout << "oto twoje powiedzonka:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;
		for ( i = 0; i < total; i++)
		{
			if (sayings[i].lenght() < sayings[shortest].lenght())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;

		}
		cout << "najkrotsze powiedzenie:\n" << sayings[shortest] << endl;
		cout << "powiedzenie pierwsze alfabetycznie:\n" << sayings[first] << endl;
		cout << "program wykorzystal " << String::Howmany() << "obiektow klasy string\n";

	}
	else
	{
		cout << "brak danych";
	}
	
	return 0;
}

