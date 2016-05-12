///
///@date   2016-05-06 21:47:32
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class A
{
public:
	virtual void print()
	{
		cout<<"A::print()"<<endl;
	};
};

class B:public A
{
public:
	void print()
	{
		cout<<"B::print()"<<endl;
	}
};

class C:public B
{
};

int main()
{
	C c;
	c.print();
	return 0;
}
