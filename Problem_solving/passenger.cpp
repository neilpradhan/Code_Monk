#include<iostream>
using namespace std;
#include<cstring>
class passenger
{
private:
	char* name;
	int age;
	char mobile_num[11];
	char coach_pref[5];
	char breadth_pref;


	bool senior;
	bool phy_cha;
	bool foreigner;
	bool child;

public:
	passenger();// default constructor
	//we will pass name, age,mobile number, coach pref , breadth pref, phy_cha, foreigner

	passenger(const char*,int,char*,char*,char,bool,bool);
	//constructors overloaded

	passenger(int);
	// below is the copy constructor
	passenger(const passenger&);
	~passenger();
	void get();
	void put()const;
	bool isSenior();
	bool isForeigner();
	bool isChild();

};

	
passenger::passenger(int n)
{

	name = new char[n];
	age = 0;

};



passenger::passenger(const char* name1, int age1,char* mobile1,char* coach,char breadth, bool phy_cha,bool foreigner)
{

name = new char[strlen(name1)];
strcpy(name,name1);
age = age1;
strcpy(mobile_num,mobile1);
strcpy(coach_pref,coach);
breadth_pref = breadth;
phy_cha = phy_cha;
foreigner = foreigner;

};




//dynamic memory allocation in constructor
passenger::passenger()
{
	name = new char[30];
	age = 0;
};


//copy constructor

passenger::passenger(const passenger &p)
{	// allocate memory for local variable
	name = new char[strlen(p.name)];
	// name and p.name are different entities but make them same content 
	strcpy(name,p.name);

	age = p.age;

	strcpy(mobile_num,p.mobile_num);
	strcpy(coach_pref,p.coach_pref);
	breadth_pref = p.breadth_pref;
	phy_cha = p.phy_cha;
	foreigner = p.foreigner;

};




//destructor
//to give back dynamic memory

passenger::~passenger()
{
	delete []name;
};


//to gget input from user

void passenger::get()
{
	cin>>name;
	cin>>age;
	cin>>mobile_num;
	cin>>breadth_pref;
	cin>>phy_cha;
	cin>>foreigner;
};


//function to print output

void passenger::put()const
{



	cout<<"Name \t"<<name<<endl;
	cout<<"Age \t"<<age<<endl;
	cout<<"Mobile numeber \t"<<mobile_num<<endl;
	cout<<"breadth \t"<<breadth_pref<<endl;
	cout<<"foreigner \t"<<foreigner<<endl;

};


//chidren or senior citizens

bool passenger::isSenior()
{
	if (age>=60)
		return true;
	return false;

};


bool passenger::isForeigner()
{
	return foreigner;	
};



bool passenger::isChild()
{
	if (age<=18)
		return true;
	return false;
};



int main()
{
	passenger p1;
	p1.get();
	p1.put();
	cout<<p1.isSenior()<<endl;
	cout<<p1.isForeigner()<<endl;
	cout<<p1.isChild()<<endl;
	return 0;
}