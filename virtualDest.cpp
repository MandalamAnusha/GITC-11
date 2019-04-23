/*...................................virtual constructor..................*/
/* whenever we create a object constructor are invoked from top to bottom.
And destruction occurs from bottom to top .But when we assign derived object address to base pointer in this scenario
if we call delete on base pointer only base destructor will be called.Derived class destructor will not be called.
which leads to memory leak. To avoid this situation we are making A class destructor as virtual..
so first B class destructor willl be called first and then B class Destructor.
*/

#include<iostream>
using namespace std;

class A 
{
	public:
	A()
	{
		cout<<"A constructor called"<<endl;
	}
	virtual ~A()
	{
		cout<<"A destructor called"<<endl;
	}
};

class B:public A 
{
	public:
	B()
	{
		cout<<"B constructor called"<<endl;
	}
	~B()
	{
		cout<<"B destructor called"<<endl;
	}
};

int main()
{
/*	A *p;
	B obj;
	p = &obj;
*/
	A *p = new B;
	delete p;
	return 0;

}
