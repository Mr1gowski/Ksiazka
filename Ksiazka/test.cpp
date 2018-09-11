#include "test.h"	
#include<cstring>



Cd::Cd(char *s1, char *s2, int n, double x)
{
	
	std::strcpy(performens, s1);
	std::strcpy(label, s2);
	selection = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	*performens = *d.performens;
	*label = *d.label;
	selection = d.selection;
	playtime = d.playtime;
}


Cd::~Cd() {};

void Cd::Report() const
{
	std::cout << "nazwa zespolu: " << performens << std::endl;
	std::cout << "nazwa albumu: " << label << std::endl;
	std::cout << "ilosc utworow: " << selection << std::endl;
	std::cout << "czas trwania: " << playtime << std::endl;

}
Cd& Cd::operator=(const Cd &d)
{
	if (this == &d)
		return *this;
	std::strcpy(performens, d.performens);
	std::strcpy(label, d.label);
	selection = d.selection;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char *s1, char *s2,
	char *m, int n, double x) : Cd(s1, s2, n, x)
{
	std::strcpy(maintitle, m);
}

 void Classic::Report() const
{
	std::cout << "nazwa zespolu: " << performens << std::endl;
	std::cout << "nazwa albumu: " << label << std::endl;
	std::cout << "ilosc utworow: " << selection << std::endl;
	std::cout << "czas trwania: " << playtime << std::endl;
}


Classic & Classic::operator=(const Classic &dc)
{
	if (this == &dc)
		return *this;
	performens
}



std::ostream & operator<<(std::ostream &os, const Classic &rs)
{

	os << "nazwa piosenki: " << rs.maintitle << std::endl;

	return os;
}


lacksDMA::lacksDMA(const char *c, const char *l, int r) :baseDMA(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const  baseDMA &rs): baseDMA(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}


std::ostream &operator<<(std::ostream &os, const lacksDMA &ls)
{
	os << (const baseDMA &)ls;
	os << "kolor: " << ls.color << std::endl;
	return os;
}

hasDMA::hasDMA(const char *s, const char *l, int r) :baseDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs) :baseDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA &hs)
{
	if (this == &hs)
		return *this;
	baseDMA::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream &operator<<(std::ostream &os, const hasDMA &hs)
{
	os << (const baseDMA&)hs;
	os << "styl: " << hs.style << std::endl;
	return os;
}

