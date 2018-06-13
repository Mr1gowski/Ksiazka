#include <cstring>

class Account
{
public:
	Account();
	Account(const char *klient, const int *nm, const double saldo = 0.0);
	void show(void);
	void depozyt(double dep);
	void wyjmij(double dep);

	
private:

	char nazwisko[40];
	int nrkonta;
	double saldo;

};

