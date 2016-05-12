///
///@date   2016-05-05 19:08:37
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class date
{
public:
	date(int,int,int);
	date(const date&);
	date&operator=(const date&);
//	date(date&&);
//	date&operator=(date&&);

	void printdate();
	void setdate(int,int,int);
private:
	int _year;
	int _month;
	int _day;
};

class datetime:public date
{
public:
	datetime(const char*);
	void printdatetime();

private:
	int _hour;
	int _minute;
	int _second;
};
