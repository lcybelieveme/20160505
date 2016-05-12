//
///@date   2016-05-05 21:10:14
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class base
{
public:
	base(int ix):_ix(ix){}
	int get_ix(){return _ix;}

	virtual void print()
	{
		cout<<"base::_ix="<<_ix<<endl;
	}
private:
	int _ix;
};

class derive:public base
{
public:
	derive(int ix,int iy)
	:base(ix)	
	,_iy(iy)
	{}

	virtual void print()
	{
		cout<<"derive::print()"<<endl;
		cout<<"_iy="<<_iy<<"_ix="<<get_ix()<<endl;
	}
private:
	int _iy;
};

int main()
{
#if 0
	base b(1);
	derive d(3,2);
	derive d1(d);
//	d.print();
	
	b=d;
	b.print();

	base*ba=&b;
	ba->print();

	cout<<"-------------------------"<<endl;

	ba=&d;
	ba->print();
#endif

	derive de(2,3);
	base ba(1);
	derive *d;
	base *b;
	d=&de;
	b=d;
	b->print();


//	d=(derive*)&ba;
//	d->print();
	return 0;
}
