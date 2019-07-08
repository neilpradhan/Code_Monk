#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(10-i);
    }



    set<int>::iterator it;
    it  = s.find(6);
    s.erase(it);
    for(set<int>::iterator it =s.begin();it!=s.end();it++)
       cout<<*it<<endl; 
       // the set does not allow repeated values hence we use multi set

       // hence for multiset just replace set with multiset
 


}
