#ifndef QUEUE_H_
#define QUEUE_H_
#include <string>
using std::string;

class TableTenisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTenisPlayer(const string & fn = "brak",
		const string &ln = "brak", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };

};

class RatedPlayer : public TableTenisPlayer
{
public:
	RatedPlayer(unsigned int r = 0, const string &fn = "brak",
		const string &ln = "brak", bool ht = false);
	RatedPlayer(unsigned int r, const TableTenisPlayer &tp);
	unsigned int Rating() const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }


private:
	unsigned int rating;
};



#endif // !QUEUE_H_
