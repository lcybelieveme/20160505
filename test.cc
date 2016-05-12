///
///@date   2016-05-06 14:36:50
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class A
{
	char k[3];
public:
	virtual void aa(){};
};

class B:public virtual A
{
//	char j[3];
public:
//	virtual void bb(){};
	void aa(){};
};
int main()
{
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
}
