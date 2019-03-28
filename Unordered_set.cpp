#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> m1;
    
    //inserting the element in the container
    m1.insert( 2);
    m1.insert(2);
    m1.insert(1);
    m1.insert(12);
    m1.insert(5);
    m1.insert(99);
    
    //printing the element in the container
    for(auto it = m1.begin(); it!= m1.end(); ++it)
    {
        
        cout<<*it<<endl;
    }
     cout<<"\n"<<endl;
     
     //finding  the element wheather it is present are not
     int key = 12;
     if(m1.find(key) == m1.end()) 
     {
        cout << key << " not found\n"; 
     }
    else
    {
        cout << "Found " << key << endl; 
    }
        cout<<"\n"<<endl;
        
     //Erasing the element
    auto it = m1.begin();
    ++it;
    m1.erase(it);
    for(auto it = m1.begin(); it!= m1.end(); ++it)
    {
        
        cout<<*it<<endl;
    }
    cout<<"\n"<<endl;
    
    //cout<<m1.front()<<endl;
    /*for(auto it = v1.begin(); it!= v1.end(); ++it)
    {
        cout<<*it<<endl;
    }*/
    
    cout<<m1.size()<<endl;
    cout<<m1.max_size()<<endl;
    //cout<<m1.back()<<endl;
    return 0;
}


