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


#endif 
