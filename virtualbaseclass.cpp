/*...................................Virtual Base Class............................*/

#include<iostream>
using namespace std;


class A 
{
	public:
	void fun()
	{
		cout<<"A::fun"<<endl;
	}
};

class B:virtual public A
{
	public:
	void amethod()
	{
		cout<<"B::fun"<<endl;
	}
};

class C:virtual public A
{
	public:
	void bmethod()
	{
		cout<<"C::fun"<<endl;
	}
};

class D:public B, public C
{};

int main()
{
	D obj;
	obj.fun();
	obj.amethod();
	return 0;
}

