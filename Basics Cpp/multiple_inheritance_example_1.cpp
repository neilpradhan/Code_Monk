#include<iostream>
#include<string.h>
using namespace std;
class person
//person has a name and can get name and show name
{
protected:
    /* data */
    char name[50];
public:
    void getdata()
    {

        cout<<"Enter name \n";
        cin>>name;
    };

    void display()
    {
        cout<<"name \n"<<name<<endl;
    };   

};

// employee is a person with name and has id and designation
class employee:public person

{// now employee has name from person and additionally id and designation
    protected:
    int id;
    string designation;
    public:
    // special functions for employee
    void get_info();// we are accessing no of hours which
    // is not attribute of employee class
    void dis();
};

//derived class from a derived class
class part_time_employee: public employee
{   private:
    int no_of_hours_worked;// only part time emplloyee hass this
    public:
    void get_part_time_employee()
    {
        employee::get_info();
        cout<<"Enter number of hours worked \n"<<endl;
        cin>>no_of_hours_worked;

    };

    void info_part_time_employee()
    {
        employee::dis();
        cout<<"Number of hours worked \n"<<no_of_hours_worked;

    };



};


// take these details for employee as
void employee::get_info()
{
    person::getdata();
    cout<<"Enter id and designation \n";
    cin>>id>>designation;

};

void employee::dis()
{
    person::display();
    cout<<"ID \n"<<id<<endl;
    cout<<"Designation\n"<<designation<<endl;

};





int main()
{
    part_time_employee e;
    e.get_part_time_employee();
    e.info_part_time_employee();
    
}