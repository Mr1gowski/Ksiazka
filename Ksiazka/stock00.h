#pragma once
#ifndef  STOCK00_H_
#define STOCK00_H_
typedef struct customer { char name[40]; double payment; };

class Stack
{
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
    double long total = 0;
	
	//zwraca false jesli stos jest pelen
	bool push( const customer &test );
	//zwraca false jesli stos jest pusty
	bool pop(const customer &test);
	

private:
	enum { MAX = 10 };
	customer tests[MAX];
	int top;


};



#endif //  STOCK00_H_
