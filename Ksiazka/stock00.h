#pragma once
#ifndef  STOCK00_H_
#define  STOCK00_H_
#include <iostream>

	
	class Stringbad
	{
	public:
		Stringbad(const char *s);
		Stringbad();
		~Stringbad();
		friend std::ostream & operator<<(std::ostream & os, const Stringbad &st);
		
	private:
		char *str;
		int len;
		static int num_strings;
		
	}


#endif //  MYTIME_H_