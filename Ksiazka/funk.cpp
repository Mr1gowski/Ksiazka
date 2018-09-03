#include "ksiazka.h"
#include <iostream>

Tabletenisplayer::Tabletenisplayer(const string & fn,
	const string & ln, bool ht) :firstname(fn), lastname(ln), hastable(ht) {}

void Tabletenisplayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

Ratedplayer::Ratedplayer(unsigned int r, const string &fn, const string &ln, bool ht) : Tabletenisplayer(fn, ln, ht)
{
	rating = r;
}

Ratedplayer::Ratedplayer(unsigned int r, const Tabletenisplayer &tp): Tabletenisplayer(tp), rating(r)
{}

