#pragma once
#ifndef  STOCK00_H_
#define  STOCK00_H_
#include <iostream>
class Stone
{
public:
	Stone();
	~Stone();
	Stone(double lbs);
	Stone(int stn, double lbs);
	void show_lbs() const;
	void show_stn()const;
	
	operator int() const;
	operator double() const;
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
friend Stone operator*(double ls, const Stone &s);
};

#endif //  MYTIME_H_
