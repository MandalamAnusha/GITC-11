/*...................extraction/Insertion operator..................*/

#include<iostream>
using namespace std;

class InOutOper
{
	int eno;
	float esal;
	public:
	InOutOper()
	{
		eno = 0;
		esal = 0.0;
	}
	InOutOper(int no, float sal)
	{
		eno = no;
		esal = sal;
	}
	friend istream &operator>>(istream &i, InOutOper &iobj);
	friend ostream &operator<<(ostream &o, InOutOper &obj);
};
	istream &operator>>(istream &i, InOutOper &iobj)
	{
		i>>iobj.eno>>iobj.esal;
		return i;
	}
	ostream &operator<<(ostream &o, InOutOper &obj)
	{
		o<<obj.eno<<"\t"<<obj.esal;
		return o;
	}
int main()
{
	InOutOper in;
	InOutOper in2(1, 30.008);
	cout<<"enter eno and esal: ";
	cin>>in2;
	cout<<in<<endl;
	cout<<in2<<endl;
	return 0;
}
