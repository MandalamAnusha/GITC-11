#include<iostream>
#include<tuple>
#include<string>

using namespace std;

tuple<int, char, string> func()
{
	tuple<int, char, string> tupobj;
	tupobj = make_tuple(1, 100, "cplusplus11");

	return tupobj;
}

int main()
{
	tuple<int, char, string> tupobj = func();

	cout<<"int value: "<<get<0>(tupobj)<<endl; 
	cout<<"char value: "<<get<1>(tupobj)<<endl; 
	cout<<"string value: "<<get<2>(tupobj)<<endl; 
	return 0;
}
