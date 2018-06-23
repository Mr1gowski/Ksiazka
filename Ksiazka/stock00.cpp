#include "stock00.h"
#include <cstring>
using std::cout;
using std::endl;
int Stringbad::num_strings = 0;

using namespace std

	Stringbad::Stringbad(const char* s)
	{
		len = std::strlen(s);
		str = new char[len + 1];
		std::strcpy(str, s);
		cout << num_strings << ": \"" << str << "\"- obiekt utworzony" << endl;
	}

	Stringbad::Stringbad()
	{
		len = 4;
		str = new char[4];
		std::strcpy(str, "c++");
		num_strings++;
		cout << num_strings << ": \"" << str << "\"- obiekt domyslny utworzony" << endl;

	}

	Stringbad::~Stringbad()
	{
		cout << "\"" << str << "\"- obiekt usuniety, ";
		--num_strings;
		cout << "sa jeszcze " << num_strings << ".\n";
		delete[] str;
	}

	std::ostream & operator<<(std::ostream &os, const Stringbad &st)
	{
		os << st.str;
		return os;
	}
