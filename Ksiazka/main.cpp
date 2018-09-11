#include <iostream>
using namespace std;
#include "test.h"

void Bravo(const Cd &disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2("sonata", "alfred", "philip", 2, 57.17);

	Cd *pcd = &c1;

	cout << "bezposrednie uzycie";
	c1.Report();
	c2.Report();

	cout << "uzycie wskaznika na typ";
	pcd->Report();
	pcd = &c2;

	pcd->Report();

	cout << " wywolanie funkci";
	Bravo(c1);
	Bravo(c2);

	cout << "test przypisania: ";
	Classic copy;
	copy = c2;
	copy.Report();
	return 0;
}


void Bravo(const Cd &disk)
{
	disk.Report();
}