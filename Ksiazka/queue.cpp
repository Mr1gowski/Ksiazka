
#include "queue.h"
#include <iostream>

TableTenisPlayer::TableTenisPlayer(const string & fn, const string &ln,
	bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}
void TableTenisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}


RatedPlayer::RatedPlayer(unsigned int r, const string &fn,
	const string &ln, bool ht) : TableTenisPlayer(fn, ln, ht)
{
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTenisPlayer &tp)
	: TableTenisPlayer(tp), rating(r)
{

}
