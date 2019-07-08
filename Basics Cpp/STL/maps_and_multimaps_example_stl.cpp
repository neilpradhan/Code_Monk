#include<iostream>
#include<map>
#include<multimap>


using namespace std;


int main(){
    pair<char,int> x;
    // map<char, int> m;
    multimap<char,int> m;




    for(char ch='a'; ch<='z';ch++)
    {
        x.first = ch;
        x.second =(int)ch;
        m.insert(x);

    }




    //map<char,int>::iterator  it= m.begin();

    multimap<char,int>::iterator  it= m.begin();


    for(it = m.begin();it!=m.end();it++)
    {
        cout<<it->first<<endl;
        cout<<it->second<<endl;

    }
     

// finding a value
    it = m.find('j');
    cout<< it->first<<endl;
    cout<<it->second<<endl;



    cout<<"another way to access key and value pairs"<<endl;
    cout<<m['k']<<endl;

    //muklimaps can store duplicate key values


    x->first ='j';
    x->second = 2030;
    m.insert(x);
    it = m.find('j');
    cout<<(*it).second<<endl;








}