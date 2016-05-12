///
///@date   2016-05-05 19:35:32
///
 
 
 
#include "date.hh"
#include <string.h>
#include <iostream>
#include <sstream>
#include <string>

using std::string;
using std::istringstream;
using std::cin;
using std::cout;
using std::endl;

date::date(int y=0,int m=0,int d=0)
:_year(y)
,_month(m)
,_day(d)
{}

date::date(const date& d)
:_year(d._year)
,_month(d._month)
,_day(d._day)
{}

date&date::operator=(const date&d)
{
	if(this!=&d)
	{
		_year=d._year;
		_month=d._month;
		_day=d._day;
	}
	return *this;
}
#if 0
date::date(date&&d)
{
	this=&d;
	return *this;
}
#endif

void date::printdate()
{
	cout<<_year<<"."<<_month<<"."<<_day<<endl;
}

void date::setdate(int y,int m,int d)
{
	_year=y;
	_month=m;
	_day=d;
}
#if 1
datetime::datetime(const char* s)

{
	char *temp=new char[strlen(s)+1];
	memset(temp,sizeof(temp),0);
	strcpy(temp,s);
	char *temp1=temp;
	while(*temp!='\0')
	{
		if(!('0'<=*temp&&*temp<='9'))
		{
		//	cout<<*temp<<" ";
			*temp=' ';
		}
		temp++;
	}
	cout<<temp1<<endl;
//	const string str(temp1);
	istringstream iss(temp1);
	int y,m,d;
	iss>>y;
	iss>>m;
	iss>>d;
	setdate(y,m,d);
	int h,min,se;
	iss>>h;
	iss>>min;
	iss>>se;
	_hour=h;
	_minute=min;
	_second=se;
}

void datetime::printdatetime()
{
	printdate();
	cout<<" "<<_hour<<":"<<_minute<<":"<<_second<<endl;
}
#endif
int main()
{
#if 1
	date d();
	datetime dt("2016,5,5 20:21:30");

	dt.printdatetime();

	date *d1=&dt;
	d1->printdate();
#endif

#if 0
	const string str("2016 5 5 20 21 30");
	istringstream iss(str);
	int y,m,d;
	iss>>y;
	iss>>m;
	iss>>d;
//	setdate(y,m,d);
	int h,min,se;
	iss>>h;
	iss>>min;
	iss>>se;

	cout<<y<<endl<<m<<endl<<d<<endl<<h<<endl<<min<<endl<<se<<endl;
#endif
}
