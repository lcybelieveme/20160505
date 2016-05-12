///
///@date   2016-05-06 21:23:02
///
 
 
 
#include <iostream>
#include <memory>
using std::cin;
using std::cout;
using std::endl;

class A
{
public:

	virtual void print()
	{
		cout<<"A::print()"<<endl;
	}
//protected:
public:
	A()
	:adata(new char[100])
	{};

	virtual	~A()
	{
		delete []adata;
		cout<<"~A()"<<endl;
	}

private:
	char*adata;
};

class B:public A
{
public:
	void print()
	{
		cout<<"B::print()"<<endl;
	}
	
	B()
	:A()
	,bdata(new char[100])
	{};
	
	~B()
	{
		delete[] bdata;
		cout<<"~B()"<<endl;
	}

private:
	char*bdata;
};

int main()
{
//	std::shared_ptr<A> a(new B);
	A*a=new B;
	a->print();
	delete a;	
}
