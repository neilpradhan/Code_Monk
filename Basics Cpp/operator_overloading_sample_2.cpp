#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

// here we will do string addition of two members to give the third memeber
// first we will define  a member function add and then convert it into an operator overloading
//
//Lessons learnt
//1. first try with a function
//2. if function is successful then switch to operator overloading
//3. [return_type] [function_ name] (args) 
//{
//
// For operator overloading just change the function name to [operator type]
// and while calling just use obj3 = obj1 type obj2 


//
// like  test 1 = 'ab'  + test 2  = 'cd'  to give test 3 = 'abcd'

class Test
{
private:
	char a[10];
public:
	void get()
	{
		cout<< "enter character";
		cin>>a;
	};

	void print()

	{
		cout << "the value is"<<a;

	};
// only t2 required as explicit argument because implicit arg already there
	Test add(Test t2)
	{
		Test t3;
		strcpy(t3.a,a);// as a is directly accessible for implicit t1 of Test
		strcat(t3.a,t2.a);
		return t3;
	};

	Test operator +(Test t2)
	{
		Test t3;
		strcpy(t3.a,a);// as a is directly accessible for implicit t1 of Test
		strcat(t3.a,t2.a);
		return t3;
	};	


};




int main()
{
	Test  t1,t2;
	t1.get();
	t2.get();
	Test t3;

	t3 = t1.add(t2);

	t3 = t1 + t2;

    t3.print();
}