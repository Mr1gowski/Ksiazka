#include<iostream>
#include"stock00.h"

int main()
{
	Stock stock1("annopol", 3, 3);
	stock1.show();
	Stock stock2 = Stock("filippol", 3, 5);
	stock2.show();
	stock2 = stock1;
	stock2.show();
	stock1.show();

	return 0;
}