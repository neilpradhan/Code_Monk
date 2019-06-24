#include<iostream>
using namespace std;

class coach
{
private:
	char coachno[5];
	char coachClass[10];
	bool ac;
	int capacity;
	int  num_of_seat_occ;



	static int total_pass;
public:
	coach();
	void get();

	void put() const;
	bool isfull();
	void incrementseat(int);
	void decrementseat(int);

	static void addpassengers(int);


};



int coach:: total_pass =0;


coach::coach()
{
	this->num_of_seat_occ = 0;// better to initialize zero and not a random value

};


void coach::get()
{
	cout<<"enter coach number capacity"<;
	cin>>this->coachno>>this->coachClass>>this->ac>>this->capacity;
};



void coach::put() const
{
	cout<<"coach number\t"<<this->coachno<<"coach class\t"<<coachClass<<endl;
	cout<<capacity<<endl<<num_of_seat_occ<<endl<<total_pass;

};


bool coach::isfull()
{
	if (this->num_of_seat_occ == this->capacity)
		return true;
	return false;
};

void coach::incrementseat(int n)
{
	this->num_of_seat_occ+=n;
};

void coach::decrementseat(int n)
{
	this->num_of_seat_occ-=n;
};

void coach::addpassengers(int n)// static functions 
{
	/// static functions do not ge this pointer
	total_pass+=n;
	// static functions cannot access normal variables

	//cout<<num_of_seat_occ;// not allowed
};


int main()
{




	coach c1;
	c1.initialize();
	c1.get();


	c1.incrementseat(12);

	c2.decrementseat(2);


	//c1.addpassengers(100)// no need as static member functions can be directly called
	// without

	coach::addpassengers(100);// use it directly as static method is a class level 
	//attribute

	c1.put();


}






}




