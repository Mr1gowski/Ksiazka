#include <iostream>

#include"stock00.h"


void callme1(Stringbad &);
void callme2(Stringbad);

int main()
{
	{using std::cout;using std::endl;
		cout << "zaczynamy blok zewnetrzny\n";
		Stringbad headline1("spiew skowronka - nowe zwrotki usypiaja?");
		Stringbad headline2("kogutom smierc");
		Stringbad sports("brzask wypada z ligi,skandal sedziowski");
		cout << "z ostatniej chwili: " << headline1 << endl;
		
		cout << "temat dnia:" << headline2 << endl;
		cout << "wiadomosci sportowe: " << sports << endl;
		callme1(headline1);

		cout << "z ostatniej chwili: " << headline1 << endl;

		callme2(headline2);
		cout << "temat dnia:" << headline2 << endl;
		cout << "inicjalizacja obiektu ciagu innym obiektem:\n";
		Stringbad sailor = sports;
		cout << "z kraju: " << sailor << endl;
		cout << "przypisanie obiektu do innego obiektu:\n";
		Stringbad knot;
		knot = headline1;
		cout << "ze swiata " << knot << endl;
		cout << "koniec bloku\n";
	}
	std::cout << "koniec main()";
	return 0;
}

void callme1(Stringbad *rsb)
{
	std::cout << "obiekt ciagu przekazany przez referencje:\n";
	std::cout << "     \"" << rsb << "\"\n";
}

void callme2(Stringbad sb)
{
	std::cout << "obiekt ciagu przekazany przez wartosc:\n";
	std::cout << "   \"" << sb << "\"\n";
}