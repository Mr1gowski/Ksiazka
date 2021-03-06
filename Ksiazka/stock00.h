#pragma once
#pragma once
#ifndef  STOCK00_H_
#define STOCK00_H_
#include <string>

class Stock
{
public:
	void acquire(const std::string &co, long n, double pr);
	void buy(long num, double price);
	void update(double price);
	void sell(long num, double price);
	void show();



private:
	std::string company;
	long shares;
	double shares_val;
	double total_val;
	void set_tot() { total_val = shares * shares_val; }

};


#endif //  STOCK00_H_
