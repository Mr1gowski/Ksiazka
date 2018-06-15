#include <iostream>
#include "stock00.h"


Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const customer &test)
{
	if (top < MAX)
	{
		top++;
		tests[top].name = test.name;
		tests[top].payment = test.payment;
		total += test.payment;
		return true;
	}
	else
		return false;
}

bool Stack::pop( customer &test)
{
	if (top > 0)
	{
		
		--top;
		test.name = tests[top].name;
		test.payment = tests[top].payment;

		return true;
	}
	else
		return false;
}