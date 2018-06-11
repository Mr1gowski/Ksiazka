#include <iostream>
#include "stock00.h"


Stock::Stock()
{
	std::cout << "wywolano konstruktor  ";
	company = "bez nazwy";
	shares = 0;
	shares_val = 0;
	total_val = 0;
}
Stock::Stock(const std::string &co, long n, double pr)
{
	std::cout << "wywolano konstruktor 2 z arg: " << co << std::endl;
	company = co;
	if (n<0)
	{
		std::cout << "liczba udzialow nie moze byc ujemna "
			<< "ustawiam liczbe udzialow w " << company << " na 0 zl";
	}
	else
	{
		shares = n;
		shares_val = pr;
		set_tot();
	}
}


Stock::~Stock()
{
	std::cout << "do widzenia";
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
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "spolka " << company
		 << "\nliczba udzialow: " << shares;
	
	
	cout << "\ncena udzialu: " << shares_val;
	cout.precision(2);
	cout << "\nlaczna wartosc udzialow: " << total_val << " zl\n";
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}





