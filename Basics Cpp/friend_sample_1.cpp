#include<iostream>
using namespace std;

class Employee
{
	int emp_id;
	friend void frind_of_employee(Employee &e);//declaration using class object just to access the data members

};

void frind_of_employee(Employee &e)
{
	e.emp_id =1000;// accessing using object and dot(.) unlike class memeber functions which are accessed directly
	cout<<e.emp_id;
};


int main()
{
	Employee e1;
	frind_of_employee(e1);
}
