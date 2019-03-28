#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> m1;
    // inserting an element
    m1.insert( {2, 9});
    m1.insert({12,10});
    m1.insert({1,9});
    m1.insert({12, 7});
    m1.insert({5, 8});
    m1.insert({99,5});
    
    
    //printing the elements
    for(auto it = m1.begin(); it!= m1.end(); ++it)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        
    }
     cout<<"\n"<<endl;
     
     
     for (auto it = m1.find(5); it != m1.end(); it++) 
     {
        cout << it->first << '\t' << it->second << '\n'; 
     }
     
     //finding  the element wheater it is present are not
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
        
     
     //erasing an element   
    auto it = m1.begin();
    ++it;
    m1.erase(it);
    for(auto it = m1.begin(); it!= m1.end(); ++it)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        
    }
    cout<<"\n"<<endl;
    
    //cout<<m1.front()<<endl;
    /*for(auto it = v1.begin(); it!= v1.end(); ++it)
    {
        cout<<*it<<endl;
    }*/
    
    //No.of elements present in container
    cout<<m1.size()<<endl;
    
    // maximum size of container
    cout<<m1.max_size()<<endl;
    
    //cout<<m1.back()<<endl;
    
    m1.clear();
    cout<<m1.size()<<endl;
    return 0;
}


