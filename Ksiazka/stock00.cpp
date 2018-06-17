#include <iostream>
#include "stock00.h"


Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::admin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::adhr(int h)
{
	hours += h;
}

void Time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
Time Time::operator-(const Time &t)const
{
	Time tiff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	tiff.minutes=(tot1 - tot2) % 60;
	tiff.hours = (tot1 - tot2) / 60;
	return tiff;
}

Time Time::operator*(double mult) const
{
	Time result;
	long totm = hours * mult * 60 + minutes * mult;
	result.hours = totm / 60;
	result.minutes = totm % 60;

	return result;
}




ostream & operator<<(ostream & os, const Time &t)
{
	os << t.hours << " godzin, " << t.minutes << " minut.";
	return os;
}

