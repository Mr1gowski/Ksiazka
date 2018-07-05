
#include <iostream>

#include"queue.h"

int main(void)
{
	using std::cout;
	using std::endl;

	Brass Piggy("bonifacy", 381299, 12000);
	BrassPluss Hoggy("horacy ", 211309, 9000);
	Piggy.ViewAc();
	cout << endl;
	cout << "wplata 3000 zl na rachunek horacego: \n";
	Hoggy.Deposit(3000);
	cout << "nowy stan konta: " << Hoggy.Balance() << endl;
	cout << "wyplata 12600";
	Piggy.Withdraw(12600);
	cout << "stan konta: " << Piggy.Balance() << endl;
	Hoggy.ViewAc();

	return 0;
}