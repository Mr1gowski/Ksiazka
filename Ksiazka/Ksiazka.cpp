
#include <iostream>
#include <cstdlib>
#include <ctime>
#include"queue.h"

int main(void)
{
	using std::cout;
	using std::endl;
	TableTenisPlayer player1("jacek", "wisniowski", true);
	RatedPlayer rplayer1(1400, "maciej", "bogaty", true);
	
	rplayer1.Name();
	
	if (rplayer1.HasTable())
		cout << ": posiada stol\n";
	else
		cout << ": nie posiada stolu\n";
	player1.Name();
	
	if (player1.HasTable())
		cout << ": posiada stol\n";
	else
		cout << ": nie posiada stolu\n";
	rplayer1.Name();
	cout << "; ranking: " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(1212, player1);
	cout << "nazwisko i imie: ";
	rplayer2.Name();
	cout << "; ranking: " << rplayer2.Rating() << endl;


	return 0;
}