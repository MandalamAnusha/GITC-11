#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int v)
{
    cout<<v<<endl;
}
int main()
{
    vector<int> vec {1,2,3,4,5,6,7};
    for_each(vec.begin(), vec.end(),print);
    return 0;
}
/*int main()
{
    std::vector<int> v(5, 99);
	std::for_each(v.begin(), v.end(), [](int i){std::cout << i << "\n";});
}*/

