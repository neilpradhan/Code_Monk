#include<iostream>
using namespace std;
#include<string.h>



//general rule pointers are used for array and for rest of all things references are used in public under class


class Student
{


private:
	char regno[12];
	char name[25];
	float CGPA;
	char branch_of_study[25];

public:
	void input()
	{
		cout<< "regno  name cgpa branch";
		cin>>regno>>name>>CGPA>>branch_of_study;
	}


	// friend function to access attributes outside of class
	// observe that class instance taken as  a pointer and then const char pointer for 
	// dynamic size
	friend bool search(Student *s, int n, const char* regno);// declaration 

};

 
//defnintion 
// if we want to check if a registration number exist then we can just
// put regno as a pointer to the 
bool search(Student *s, int n, const char* regno)
{
	// remember we cannot directly acess it but through object *s and dot operator

	int i;
	for (i=0; i<n; i++)
		// accessing as an array which is direct address hence student *s
		if (strcmp(s[i].regno, regno)==0)
				return true;
			return false;


};


int main()
{
	Student students[3];
	int n;
	cout<< "Enter the number of students";
	cin>>n;

	cout<<"Input"<< n<<"Student details\n";
	for(int i=0;i<n;i++)
		students[i].input();
	search(students,n,"15bce0100")?cout<<"Success":cout<<"no such student";
		return 0;
}