#ifndef QUEUE_H_
#define QUEUE_H_
#include <string>

class Brass
{
private:
	std::string fullname;
	long accNum;
	double balance;
public:
	Brass(const std::string &s = "brak", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAc() const;
	virtual ~Brass() {}
};

class BrassPluss : public Brass
{
private:
	double maxloan;
	double rate;
	double owesbank;
public:
	BrassPluss(const std::string & s = "brak", long an = -1, double bal = 0.0,
		double ml = 2000, double r = 0.11125);
	BrassPluss(const Brass & ba, double ml = 2000, double r = 0.11125);
	virtual void ViewAc() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) {maxloan = m;}
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesbank = 0; }
};


#endif // !QUEUE_H_
