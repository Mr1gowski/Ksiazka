#include<iostream>
#include <ctype.h>
#include"stock00.h"


int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	Stack st;
	char ch;
	
	customer test;

	
	unsigned long po;
	
	cout << "nacisnij D aby wprowadzic deklarecje, \n"
		<< "P aby przetworzyc deklaracje, lub K aby zakonczyc\n";
	while (cin>>ch&&toupper(ch)!='K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd': cout << "podaj nr deklaracji: ";
			cin>>test.name;
			cin >> test.payment;
			if (st.isfull())
				cout << "stos jest pelen\n";
			else
				st.push(test);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "stos jest pusty\n";
				  else
				  {
					  st.pop(test);
					  cout << "deklaracja nr" << test.name << " zdjeta\n";
				  }
				  break;
		
		}
		cout << "nacisnij D aby wprowadzic deklarecje, \n"
			<< "P aby przetworzyc deklaracje, lub K aby zakonczyc\n";
	}
	cout << "fajrant";
	
	
	return 0;
}