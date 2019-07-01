// If more than one class is inherited from a base class, it's known as hierarchical inheritance. 
// In general, all features that are common in child classes are included in base class in hierarchical inheritance. 


//                 Employee
//             /            \
//          permanent emp   temporary emp
#include<iostream>
using namespace std;
class emp
{
    protected:
    int id;
    char name[20];

};

class permanent_emp:public emp
{
protected:
    char design[20];
    char depart[20];
public:
    void get_permanent_emp()
    {
        cout<<"Enter id and name \n"<<endl;
        cin>>id>>name;
        cout<<"Designation \n"<<endl;
        cin>>design;
        cout<<"Department \n";
        cin>>depart;
    };

    void put_permenant_emp()
    {
        cout<<"ID \n"<<id<<endl;
        cout<<"Name \n"<<name<<endl;
        cout<<"Designation \n"<<design<<endl;
        cout<<"Department \n"<<depart;   

    };

};


class tempemp:public emp
{
    public:
    int working_day;
    char contractname[20];
    void get_tempemp() // we will define this below
    {
        cout<<"Enter id and name \n"<<endl;
        cin>>id>>name;
        cout<<"Enter the number of working days \n"<<endl;
        cin>>working_day;
        cin>>contractname;

    };



    void put_tempemp()
    {
        cout<<"ID \n"<<id<<endl;
        cout<<"Name \n"<<name<<endl;
        cout<<"Number of working days \n"<<working_day<<endl;
        cout<<"contract name  \n"<<contractname<<endl;

    };
};


int main()

{
    permanent_emp pemp;
    tempemp temp;
    pemp.get_permanent_emp();
    pemp.put_permenant_emp();
    cout<<" \n";
    temp.get_tempemp();
    temp.put_tempemp();
    return 0;

}



