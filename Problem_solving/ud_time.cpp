

#include<iostream>
using namespace std;

typedef struct
{
	int hour;
	int min;
	int sec;

}ud_time;

void get(ud_time&);

void print(ud_time);

ud_time ud_time_add(ud_time,int);




int main()
{
	//create objects
	ud_time t1,t2;

	int min;

	get(t1);

	cin>>min;
	t2 = ud_time_add(t1,min);
	print(t2);
	return 0;
};


void get(ud_time& t)
{
	cin>>t.hour>>t.min>>t.sec;

};


void print(ud_time t)
{
	cout<<t.hour<<"\t"<<t.min<<"\t"<<t.sec<<endl;
};

ud_time_add(ud_time t1, int m)
{
	ud_time t2;
	int hr;
	t2.sec = t1.sec;
	t2.min = t1.min;
	t2.hour = t1.hour;
	if(t2.min >=60)
	{
		hr= t2.min/60;
		t2.min =t2.min-hr*60;
		t2.hour = t2.hour + hr;


	}
	return t2;


};




typedef struct ud_time
{
	int hour;
	int min;
	int sec;

	void get();

	void print();

	ud_time add(int);

}ud_time;
