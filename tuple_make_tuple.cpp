#include<tuple>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	tuple<int, char, string> tupobj;
	tupobj = make_tuple(1, 's', "sssss");

	cout<<"int value: "<<get<0>(tupobj)<<endl;
	cout<<"char value: "<<get<1>(tupobj)<<endl;
	cout<<"string value: "<<get<2>(tupobj)<<endl;
	return 0;
}
