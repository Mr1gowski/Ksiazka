
#include <iostream>
#include <string>
#include"queue.h"


const int CLIENTS = 4;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	AcctABC * p_clients[CLIENTS];
	std::string temp;
	long tempnum;
	double tembhal;
	char kind;
	for (int  i = 0; i < CLIENTS; i++)
	{
		cout << "podaj imie i nazwisko klienta: ";
		getline(cin, temp);
		cout << "podaj numer rachunku konta: ";
		cin >> tempnum;
		cout << "podaj poczatkowy stan konta: ";
		cin >> tembhal;
		cout << "wpisz 1 dla rachunku brass lub 2 dla rachunku brassplus: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "wpisz 1 lub 2: ";
		if (kind=='1')
			p_clients[i] = new Brass(temp, tempnum, tembhal);
		else
		{
			double tmax, trate;

			cout << "podaj limit debetu: ";
			cin >> tmax;
			cout << "podaj stope oprocentowania "
				<< "jako ulamek dziesietny: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tembhal, tmax, trate);
		}
		while (cin.get() !='\n')
			continue;

	}
	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int  i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];

	}
	cout << "gotowe";
	

	return 0;
}