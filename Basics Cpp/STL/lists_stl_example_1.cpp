#include<iostream>
#include<list>
#include<algorithm>
// for find is in algorithm
//deque helps in inserting  value at start of an array in order of 1 time
//if we want to insert it in between array, vector deque we need to re oder it 
// hence we choose lists

// internally list is double connected linked list
// so no index access

using namespace std;

int main()
{
    list<int> l;
    l.push_back(0);

// iterating the list with for loop is a bad idea we must use iterator always
    for(int i=0;i<10;i++)
    {
        l.push_back(i+1);
    }
    // iterator stores the address
    list<int>::iterator itr = find(l.begin(),l.end(),8);// I am try to find 8 in the list of l


    l.insert(itr,5);// in the place of 8 we have stored 5
    itr = find(l.begin(),l.end(),7);
    l.erase(itr);
// for printing we do not have random access hence we will use iterators

// proper way to indexing list
    for(list<int>::iterator it =l.begin();it!=l.end();it++)
    {
        cout<<*it<<endl;
    }


// splice








}
