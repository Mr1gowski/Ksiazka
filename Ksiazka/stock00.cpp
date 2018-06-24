
#include <cstring>
#include "stock00.h"
using std::cout;
using std::endl;
int Stringbad::num_strings = 0;

using namespace std;

	Stringbad::Stringbad(const char* s)
	{
		len = std::strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
		num_strings++;
		cout << num_strings << ": \"" << str << "\"- obiekt utworzony" << endl;
	}

	Stringbad::Stringbad()
	{
		len = 4;
		str = new char[4];
		strcpy(str, "c++");
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

	Stringbad & Stringbad::operator=(const Stringbad & st)
	{
		if (this == &st)
			return *this;
		delete[] str;
		len = st.len;
		str = new char[len + 1];
		std::strcpy(str, st.str);
		return *this;
	}

	std::ostream & operator<<(std::ostream &os, const Stringbad &st)
	{
		os << st.str;
		return os;
	}


	Stringbad::Stringbad(const Stringbad &st)
	{
		num_strings++;
		len = st.len;
		str = new char[len + 1];
		std::strcpy(str, st.str);
		cout << num_strings << " " << str << " obiekt utw";
	}