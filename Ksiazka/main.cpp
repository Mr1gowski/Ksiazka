#include <iostream>
#include "test.h"

int main()
{
	using std::cout;
	using std::endl;

	baseDMA shirt("portabelly", 8);
	lacksDMA balloon("czerwony", "blimpo", 4);
	hasDMA map("merkator", "buffalo keys", 5);
	cout << "wypisanie obiektu baseDMA:\n";
	cout << shirt << endl;
	cout << "wypisanie obiektu lacksDMA:\n";
	cout << balloon << endl;
	cout << "wypisanie obiektu hasDMA:\n";
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "wynik kopiowania lacksDMA:\n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "wynik przypisania hasDMA:\n";
	cout << map2 << endl;
	return 0;
}