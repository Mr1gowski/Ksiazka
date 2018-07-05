#include <iostream>
#include "queue.h"
using std::cout;
using std::endl;
using std::string;
//formatowanie napisów
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);
//---------------------------------

Brass::Brass(const string &s, long an, double bal)
{
	fullname = s;
	accNum = an;
	balance = bal;

}

void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "Nie mozna wplacic ujemnej kwoty; "
		<< "Wplata anulowana/n";
	else
		balance +=amt;
}

void Brass::Withdraw(double amt)
{
	//formatowanie na ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);
	if (amt < 0)
		cout << "Nie mozna wyplacic ujemnej kwoty; "
		<< "Wyplata anulowana\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Zadana suma " << amt
		<< " zl przekracza dostepne srodki.\n"
		<< " Wyplata anulowana\n";
	restore(initialState, prec);

}

double Brass::Balance() const
{
	return balance;
}
void Brass::ViewAc() const
{
	//format na ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "Klient: " << fullname << endl;
	cout << "Numer rachunku: " << accNum << endl;
	cout << "Stan konta: " << balance << " zl" << endl;
	restore(initialState, prec);
}


BrassPluss::BrassPluss(const string &s, long an, double bal, double ml, double r) : Brass(s, an, ml)
{
	maxloan = ml;
	owesbank = 0.0;
	rate = r;
}

BrassPluss::BrassPluss(const Brass &ba, double ml, double r):Brass(ba)
{
	maxloan = ml;
	owesbank = 0.0;
	rate = r;
}

void BrassPluss::ViewAc() const
{
	//format na ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAc();
	cout << "limit debetu: " << maxloan << " zl" << endl;
	cout << "kwota zadluzenia: " << owesbank << " zl" << endl;
	cout.precision(3);
	cout << "stopa oprocentowania: " << 100 * rate << "%\n";
	restore(initialState, prec);
}

void BrassPluss::Withdraw(double amt)
{
	//format na ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxloan - owesbank)
	{
		double advance = amt - bal;
		owesbank += advance * (1.0*rate);
		cout << "zadluzenie faktyczne: " << advance << " zl" << endl;
		cout << "odsetki: " << advance * rate << " zl" << endl;
		Brass::Withdraw(amt);
	}
	else
		cout << "przekroczony limit debetu. operacja anulowana\n";
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