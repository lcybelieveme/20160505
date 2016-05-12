///
///@date   2016-05-11 16:29:18
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class A
{
public:
	A(A*a=NULL)
	:_A(a)
	{cout<<"A()\n";};
	virtual ~A()
	{
		cout<<"~A()\n";
		delete _A;
	}
	virtual void request()=0;
protected:
	A*_A;
};

class A1:public A
{
public:
	A1(A*a=NULL)
	:A(a){cout<<"A1()\n";};
	~A1()
	{
		cout<<"~A1()\n";
	}
	void request()
	{
		if(_A==NULL)
		{
			cout<<"A1::request()\n";
		}
		else
			_A->request();
	}
};
class A2:public A
{
public:
	A2(A*a=NULL)
	:A(a){cout<<"A2()\n";}
	~A2()
	{
		cout<<"~A2()\n";
	}
	void request()
	{
		if(_A==NULL)
		{
			cout<<"A2::request()\n";
		}
		else
			_A->request();
	}
};

int main()
{
	A*pA1=new A1();
	A*pA2=new A2(pA1);

	pA2->request();
	delete pA2;

	return 0;
}
