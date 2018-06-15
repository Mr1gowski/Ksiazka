#pragma once
#ifndef  STOCK00_H_
#define STOCK00_H_
typedef unsigned long item;

class Stack
{
public:
	Stack();
	bool isempty() const;
	bool isfull() const;

	
	//zwraca false jesli stos jest pelen
	bool push(  cus &test );
	//zwraca false jesli stos jest pusty
	bool pop( cus &test);
	

private:
	enum { MAX = 10 };
	cus test[MAX];
	int top;


};



#endif //  STOCK00_H_
