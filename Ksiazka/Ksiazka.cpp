#include <iostream>
#include "ksiazka.h"

int main(void)
{
	using std::cout;
	using std::endl;
	Tabletenisplayer player1("jacek", "pogodny", true);
	Ratedplayer rplayer1(1140, "maciej", "kaczkowski", true);
	rplayer1.Name();
	if (rplayer1.Hastable())
		cout << ": posiada stol.\n";
	else
		cout << "nie posiada stolu.\n";

	Tabletenisplayer player2("teresa", "bogatko", false);
	player1.Name();
	if (player1.Hastable())
		cout << ": posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	cout << "nazwisko i imie: ";
	rplayer1.Name();
	cout << ", ranking: " << rplayer1.Rating() << endl;
	Ratedplayer rplayer2(1212, player1);
	cout << "nazwisko i imie: ";
	rplayer2.Name();
	cout << ", ranking: " << rplayer2.Rating() << endl;
	if (player2.Hastable())
	
	return 0;
	
}
