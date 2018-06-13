#include <iostream>
#include "stock00.h"


void Account::show()
{
	std::cout << "nazwisko: " << nazwisko << ", ";
	std::cout << "nr konta: " << nrkonta << ", ";
	std::cout << "saldo konta: " << saldo << ".\n";
}

void Account::depozyt(double dep)
{
	saldo += dep;
}

void Account::wyjmij(double dep)
{
	saldo -= dep;
}

