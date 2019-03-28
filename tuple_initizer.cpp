#include<iostream>
#include<tuple>
#include<string>
using namespace std;

int main()
{
        tuple<int, char, std::string> tupobj{1, 'a', "anu"};

        cout<<"int value: "<<get<0>(tupobj)<<endl;
        cout<<"char value: "<<get<1>(tupobj)<<endl;
        cout<<"string value: "<<get<2>(tupobj)<<endl;
        return 0;
}

