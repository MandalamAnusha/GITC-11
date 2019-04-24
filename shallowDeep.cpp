

#include<iostream>
#include<string.h>
using namespace std;

class ShoDep
{
	int empno;
	char *ename;
	int edept;
	public:
//	ShoDep() = default;
	ShoDep()
	{
		empno = 0;
		ename = new char;
		ename[0] = '\0';
		edept = 0;
	}
	ShoDep(int no, char *name,int dept)
	{
		empno = no;
		ename = new char[strlen(name)+1];
		strcpy(ename, name);
		edept = dept;
		
	}
	ShoDep(const ShoDep &obj)
	{
		empno = obj.empno;
		ename = new char[strlen(obj.ename)+1];
		strcpy(ename, obj.ename);
		edept = obj.edept;
	}
	~ShoDep()
	{
		delete []ename;
		cout<<"destructor called"<<endl;
	}
	void display()
	{
		cout<<empno<<"\t"<<ename<<"\t"<<edept<<endl;
	}
};

int main()
{
	ShoDep obj1;
	ShoDep obj2(1, "Anu", 4);
	ShoDep obj3(obj2);
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
