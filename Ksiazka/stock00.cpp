#pragma once
#include <iostream>
#include "stock00.h"
using std::cout;
Stone::Stone(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}



Stone::Stone(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stone::Stone()
{
	stone = pounds = pds_left = 0;
}

Stone::~Stone()
{}

void Stone::show_stn() const
{
	cout << stone << " kamieni, " << pds_left << " funtow\n";
}

void Stone::show_lbs() const
{
	cout << pounds << " funtow\n";
}

Stone::operator int() const
{
	return int(pounds + 0.5);
}

Stone::operator double() const
{
	return pounds;
}
Stone operator*(double ls, Stone &s)
{
	return Stone(ls*s.pounds);
}
