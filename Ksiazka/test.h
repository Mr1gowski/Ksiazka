#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class Cd
{
private:
	char performens[50];
	char label[20];
	int selection;
	double playtime;
public:
	Cd( char *s1,char *s2, int n, double x);
	Cd(const Cd &d);
	Cd();
	~Cd();
	void Report() const;// wyswietla info o danych
	Cd & operator=(const Cd &d);

};

class Classic : public Cd
{
private:
	char maintitle[40];
public:
	Classic(char *s1, char *s2,
		char *m, int n, double x): Cd(*s1,*s2,*maintitle,n,x);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic &dc);
	friend std::ostream & operator<<(std::ostream &os, const Classic &rs);
};
#endif // !DMA_H_
