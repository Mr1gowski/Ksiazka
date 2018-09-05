#include <iostream>
#include "queue.h"
using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string &s, long an, double bal)
{
	fullName = s;
	accNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)
{
	if (amt < 0)
	{
		cout << "nie mozna wplacic ujemnej kwoty;"
			<< "wplata zostala anulowana.\n";
	}
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	if (amt < 0)
	{
		cout << "nie mozna wyplacic ujemnej kwoty;"
			<< "wyplata anulowana,\n";
	}
	else if (amt <= balance)
		balance - +amt;
	else
		cout << "zadana suma " << amt
		<< "zl przekracza dostepne srodki.\n"
		<< "wyplata anulowana.\n";
	restore(initialState, prec);
}

double Brass::Balance() const
{
	return balance;
}

void Brass::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "klient: " << fullName << endl;
	cout << "numer rachunku: " << accNum << endl;
	cout << " stan konta: " << balance <<"zl"<< endl;
	restore(initialState, prec);
}


BrassPlus::BrassPlus(const string &s, long an, double bal,
	double ml, double r) : Brass(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

 BrassPlus::BrassPlus(const Brass &ba, double ml, double r) :Brass(ba)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

 void BrassPlus :: ViewAcct() const
 {
	 format initialState = setFormat();
	 precis prec = cout.precision(2);

	 Brass::ViewAcct();
	 cout << "limit debetu: " << maxLoan << " zl" << endl;
	 cout << "kwota zadluzenia: " << owesBank << " zl" << endl;
	 cout.precision(3);
	 cout << "stopa oprocentowania: " << 100 * rate << "%\n";
	 restore(initialState, prec);
 }

 void BrassPlus::Withdraw(double amt)
 {
	 format initialState = setFormat();
	 precis prec = cout.precision(2);

	 double bal = Balance();
	 if (amt <= bal)
		 Brass::Withdraw(amt);
	 else if (amt <= bal + maxLoan - owesBank)
	 {
		 double advance = amt - bal;
		 owesBank += advance * (1.0 + rate);
		 cout << "zadluzenie faktyczne: " << advance << " zl" << endl;
		 cout << "odsetki: " << advance * rate << "zl" << endl;
		 Deposit(advance);
		 Brass::Withdraw(amt);
	 }
	 else
		 cout << "przekroczony limit debetu. operacja anulowana.\n";
	 restore(initialState, prec);
 }

 format setFormat()
 {
	 return cout.setf(std::ios_base::fixed,
		 std::ios_base::floatfield);
 }

 void restore(format f, precis p)
 {
	 cout.setf(f, std::ios_base::floatfield);
	 cout.precision(p);
 }