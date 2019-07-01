//order of contructor call
// Whether derived class's default constructor is called or parameterised is called, 
// base class's default constructor is always called inside them.

// To call base class's parameterised constructor inside derived class's parameterised constructor,
// we must mention it explicitly while declaring derived class's parameterized constructor.

#include<iostream>
using namespace std;
class Base
{
    int x;
    public:
    Base() {cout<<"base default constructor"<<endl;}
    Base(int x){cout<<"base parameterised constructor"<<endl;}
};


class Derived:Base
{
    int y;
    public:
    Derived(){cout<<"Derived default constructor"<<endl;}
    Derived(int y){cout<< " Derived parameterised constructor"<<endl;};
    //Derived(int y) :Base(y){cout<<"Derived parameterised constructor"<<endl;};
    // if the last line is uncommmented we will have following
    //result 
    //base parameterised constructor
    //Derived parameterised constructor
    // and if we uncomment othervise
    // base default constructor
    //Derived parameterised constructor



};

int main()
{
    //Base b;
    //Derived d1;
    Derived d2(10);
}
