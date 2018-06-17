#pragma once
#include <string>

#ifndef  MYTIEM_H_
#define MYTIME_H_

#include <iostream>
using std::ostream;

class Time
{
public:
	Time();
	Time(int h, int m = 0);
	void admin(int m);
	void adhr(int h);
	void reset(int h = 0, int m = 0);
	Time operator+(const Time &t)const;
	Time operator-(const Time &t)const;
	Time operator*(double m)const;
	friend Time operator*(double m, const Time &t)
	{	return t * m;  }

	friend ostream & operator<<(ostream & os,const Time &t);

private:
	int hours;
	int minutes;

};



#endif //  MYTIME_H_
