#include<iostream>
#include<string.h>
using namespace std;
//
// we will make a program such that we  will store train no and train names and 
//given number we can find the name and  given name we can find the number



class train
{
private:
	int trainNo;
	char name[20];
public:
	friend char const* search(train*,int,int);
	//search for train number given train name
	friend int search(train*,char*,int num);

	void input()
	{   
		cout<< "trainNo name";
		cin>>trainNo>>name;
	};	

};




char const* search(train *t,int no,int num)
{
	//traverse through the array
	for (int i=0;i<num;i++)
	{	// outside aceess through dot operator
		if (t[i].trainNo == no)
		cout<<t[i].name;
			return t[i].name;

	}
	cout<<"did not find";
	char const* p =NULL;
    return p;

};


int search(train *t, char* k, int num)
{
	for(int i=0;i<num;i++)
	{
		if (strcmp(t[i].name,k) == 0)
		    cout<<t[i].trainNo;
			return t[i].trainNo;

	}
	cout<<" bahar aagaya";
	return 0;
};




int main()
{
	//int num;
	//cin>>"input number of trains">>num;
	train t[2];// address 

	for(int i=0;i<2;i++)
		t[i].input();// defined in the class	
	search(t,"neil",2);
	//search(t,1,2);

    return 0;

}
