#include <cstring>

class Person
{
public:
	Person() { lname = "", fname[0] = '\0'; }
	Person(const std::string &ln, const char*fn = "hej ty");

	void Show() const;
	void formalShow() const;
	
private:

	static const int LIMIT = 256;
	std::string lname;
	char fname[LIMIT];


};

