/*........................................friend class.....................*/
//sample
#include<iostream>
using namespace std;

class A 
{
	int q;
	public:
	A() = default;
	A(int w)
	{
		q = w;
	}
	void display()
	{
		cout<<"A: "<<q<<endl;
	}
	friend class B;
	friend class C;
};

class B 
{
	int r;
	public:
	B() = default;
	B(int w, int x):r(x)
	{}
	void display(A &o1)
	{
		cout<<"A: "<<o1.q<<"\t"<<"B: "<<r<<endl;
	}
	friend class C;
};

class C 
{
	int s;
	public:
	C() = default;
	C(int w, int x, int y):s(y)
	{}
	void display(A &o1, B &o2)
	{
		cout<<"A: "<<o1.q<<"\t"<<"B: "<<o2.r<<"\t"<<"C: "<<s<<endl;
	}
};

int main()
{
	A o1;
	A o2(1);
	B o3;
	B o4(1, 2);
	C o5;
	C o6(1, 2, 3);

	o2.display();
	o4.display(o2);
	o6.display(o2, o4);

	
	return 0;
}
