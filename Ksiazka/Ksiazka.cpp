#include <iostream>
#include "ksiazka.h"

int main(void)
{
	using std::cout;
	Tabletenisplayer player1("jacek", "pogodny", true);
	Tabletenisplayer player2("teresa", "bogatko", false);
	player1.Name();
	if (player1.Hastable())
		cout << ": posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	player2.Name();
	if (player2.Hastable())
		cout << ": posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	return 0;
	
}
