#include <cstring>

class Account
{
public:
	Account();
	Account(const char *klient, const char *nm, const double sal)
	{
		strncpy(nazwisko, klient, 39);
		nazwisko[39] = '\0';
		strncpy(nrkonta, nm, 24);
		nrkonta[24] = '\0';
		saldo = sal;

	}
	void show(void);
	void depozyt(double dep);
	void wyjmij(double dep);

	
private:

	char nazwisko[40];
	char nrkonta[25];
	double saldo;

};

