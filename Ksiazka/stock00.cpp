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

bool Stack::push(cus & test)
{
	if (top < MAX)
	{
		name = 
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop( cus & test)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}