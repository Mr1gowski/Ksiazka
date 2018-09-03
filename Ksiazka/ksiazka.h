#ifndef TEBLETEN_H_
#define TABKETEN_H_
#include <string>
using std::string;

class Tabletenisplayer
{
public:
	
	Tabletenisplayer(const string &fn = "brak", const string &ln = "brak", bool ht = false);
	void Name() const;
	bool Hastable() const { return hastable; }
	void Resettable(bool v) { hastable = v; }
	
private:
	string firstname;
	string lastname;
	bool hastable;
};

class Ratedplayer : public Tabletenisplayer
{
private:
	unsigned int rating;
public:
	Ratedplayer(unsigned int r = 0, const string &fn = "brak",
		const string &ln = "brak", bool ht = false);
	Ratedplayer(unsigned int r, const Tabletenisplayer &tp);
	unsigned int Rating() const { return rating; }
	void Resetrating(unsigned int r) { rating = r; }
};
#endif 
