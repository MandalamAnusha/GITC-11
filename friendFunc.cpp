/*...........................Friend Function........................*/

/*  Friend function are defined outside the class, but it has right to access all private members and
protected members of the class.Even though prototypes for friend functions appear in the class, 
but the function is not member function of the class.*/

#include<iostream>
using namespace std;


class FrndFun
{
	int a;
	public:
	FrndFun()=default;
	void setdata(int x)
	{
		a = x;
	}
	friend void display(FrndFun &);
};
void display(FrndFun &o)
{
	cout<<o.a<<endl;
}

int main()
{
	FrndFun obj;
	obj.setdata(10);
	display(obj);
	return 0;
} 
