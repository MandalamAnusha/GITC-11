/*..........................................Pure Virtual Function.......................*/
/* = 0 tells the complier it has no body.
it is like statement which is endd with semicolon.
It is programmer responsibility to implement the pure virtual function. */

#include<iostream>
using namespace std;

class Shape 
{
	public:
	virtual void draw() = 0;
};
class Square:public Shape
{
	public:
	virtual void draw()
	{
		cout<<"drawing the square shape"<<endl;
	}
};
class Rectangle:public Shape
{
	public:
	virtual void draw()
	{
		cout<<"drawng the rect shape"<<endl;
	}
};
int main()
{
	Shape *p ;
	Square o1;
	Rectangle o2;
	p = &o1;
	p->draw();
	p = &o2;
	p->draw();
	return 0;
}
