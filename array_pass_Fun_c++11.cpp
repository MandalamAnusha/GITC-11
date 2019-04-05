#include<iostream>
#include<array>
using namespace std;

void print(array<int, 4> ar)
{
	for(auto a:ar)
	{
		cout<<a<<endl;
	}
}

int main()
{
	array<int, 4 >  arr = {1,5,3,7};
	print(arr);
	return 0;
}
