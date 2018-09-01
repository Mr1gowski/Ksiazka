#include "ksiazka.h"
#include <iostream>

Tabletenisplayer::Tabletenisplayer(const string & fn,
	const string & ln, bool ht) :firstname(fn), lastname(ln), hastable(ht) {}

void Tabletenisplayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

