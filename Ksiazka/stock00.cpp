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

bool Stack::push(const item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop( item &item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}