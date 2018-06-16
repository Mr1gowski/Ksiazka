#pragma once
#include <string>
#ifndef  STOCK00_H_
#define STOCK00_H_



class Lista
{
public:
	Lista();

	void show() const;
	int change(int a);
	void i();

private:
    std::string imie;
	int sytosc;

};



#endif //  STOCK00_H_
