
#include <iostream>
#include <cstdlib>
#include <ctime>
#include"queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));
	cout << "Studium przypadku :bankomat stu kas\n";
	cout << "Set max lenght of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);


	cout << "Set simulated time (in hours) ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;


	cout << "Set avarage number of customers per hour\n";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;
	
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{

		if (newcustomer(min_per_cust))
		{

			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
				cout << "test " << customers;
			}

		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
			cout << "test " << customers;
		}
		if (wait_time > 0)
				wait_time--;
		sum_line += line.queuecount();
	
	}

	if (customers > NULL)
	{
		cout << " liczba klientow przyjetych " << customers << endl;
		cout << " liczba klientow obsluzonych " << served << endl;
		cout << " liczba klientow odeslanych " << turnaways << endl;
		cout << " srednia dlugosc kolejki ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "sredni czas oczekiwania ";
		cout << (double)line_wait / served << " minut\n";
	}
	else
		cout << "brak klientow\n";
	cout << "gotowe";

	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() *x / RAND_MAX < 1);
}