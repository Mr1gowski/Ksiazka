#pragma once
#ifndef  STOCK00_H_
#define STOCK00_H_
typedef unsigned long item;

class Stack
{
public:
	Stack();;
	bool isempty() const;
	bool isfull() const;
	//zwraca false jesli stos jest pelen
	bool push(const item &item);
	//zwraca false jesli stos jest pusty
	bool pop(item &item);

private:
	enum { MAX = 10 };
	item items[MAX];
	int top;


};



#endif //  STOCK00_H_
