#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double par)
{
	company = co;
	if (n < 0)
	{
		std::cout << "liczba nie moze byc ujemna!!!!!"
			<< "\nustawiam liczbe udzialow firmy " << company << " na 0";
		shares = 0;
	}
	else
	{
		shares = n;

	}
	shares_val = par;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num<0)
	{
		std::cout << "liczba nabywanych udzialow nie moze byc ujemna!!!!!\n"
			<< "transakcja przerwana\n";

	}

	else
	{
		shares += num;
		shares_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num<0)
	{
		std::cout << "liczba sprzedanych udzialow nie moze byc ujemna!!!!\n"
			<< "transakcja przerwana\n";
	}
	else if (num > shares)
	{
		std::cout << "liczba udzialow ktore zamierzasz sprzedac przewyzsza posiadana liczbe udzialow\n"
			<< "transakcja przerwana\n";
	}
	else
	{
		shares -= num;
		shares_val = price;
		set_tot();
	}

}


void Stock::update(double price)
{
	shares_val = price;
	set_tot();

}

void Stock::show()
{
	std::cout << "spolka " << company
		<< "\nliczba udzialow: " << shares
		<< "\ncena udzialu: " << shares_val
		<< "\nlaczna wartosc udzialow: " << total_val << " zl\n";
}





