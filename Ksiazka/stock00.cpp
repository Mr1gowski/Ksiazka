#include <iostream>
#include "stock00.h"


Lista::Lista()
{
	sytosc = 50;
	imie = "Plorga";
	
}

void Lista::i()
{
	std::cout << "podaj imie"<<std::endl;
	std::cin >> imie;
}
void Lista::show() const
{
	std::cout << imie << std::endl;
	std::cout << sytosc << std::endl;
}

int Lista::change(int a)
{
	sytosc = a;
	return 0;
}
