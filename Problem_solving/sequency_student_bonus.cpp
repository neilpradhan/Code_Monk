// in this problem the student gets a bonus (different for every problem) and a deadline and the task is choose
// to solve those problems which gives the maximum bonus


#include <iostream>
#include<stdio.h>
using namespace std;
class problem
{
    protected:
    int problem_number[10];
    int submission_date[10];
    int bonus[10];
    public:
    // n is the number of problems
    // to get input from the user
    void get_problem(int n)
    {// for every child lets get the problem ids
        for (int i=0;i<n;i++)
        {
            cout<<("\nEnter the problem number")<<endl;
            cin >> problem_number[i];
            cout<<"\nenter date of submission for bonus";
            cin>>submission_date[i];
            cout<<"\nEnter the bonus points for the problem";
            cin>>bonus[i];
        };

    };
    // put for displaying the details
    void put_problem(int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<problem_number[i]<<" ";
            cout<<submission_date[i]<<" ";
            cout<<bonus[i]<<"\n";
            

        }

    };
   
};
// inheritance from the class problem
class student_work:public problem
{
    int  reg_no; //  registraiton  number of student
    char name[50];
    public:
    // additional details for the student
    void get_assignment(int n)
    {
        int i;
        cout<<"\nEnter the registration number";
        cin>>reg_no;
        cout<<"\nEnter student name";
        cin>>name;
        get_problem(n);

    }

    void put_assignment(int n)
    {
        int j;
        cout<<reg_no<<" ";
        cout<<name<<" \n";
        put_problem(n);

    }

    void final_sequency(int n)
    {
        for (int i;i<n-1;i++)
        {
            int max = i;
            for(int j=i+1;j<n;j++)
            {
                if (bonus[j]>bonus[max])
                    {
                        max = j;
                    };

            };
            // based on bonus marks we will sort in descending order
            int temp1  = bonus[0];
            bonus[i] = bonus[max];
            bonus[max] = temp1;


            int temp2 = problem_number[i];
            problem_number[i] = problem_number[max];
            problem_number[max] = temp2;

            int temp3 = submission_date[i];
            submission_date[i]= submission_date[max];
            submission_date[max] = temp3;

            int slot[n];
            

            int day =1;
            slot[0]=1;
            int m = bonus[0];


            for (i=1;i<n;i++)
            {
                if (submission_date[i]==day)
                    continue;// if you skip the day will not increment so directly next loop
                    // hence we make sure day is utilized for a problem and then increments
                else if (submission_date[i]>day)
                {
                    slot[i] =1;
                    m = m + bonus[i];// catch the highest bonus first in order 
                
                }
                day++;
            };
            
            cout<<"solving best sequency is : "<<endl;


            for(i=0;i<n;i++)
                {
                    if(slot[i]!=0)
                        cout<<problem_number[i]<<endl;
                }; 
                cout<<"Total bonus :"<<m;
        
        };

     };
};     


int main()
{
    int k,numbers,n;
    student_work s[20];
    cout<<"\nEnter number of students"<<endl;
    cin>>numbers;
    cout<<"\nEnter the number of problems to every student"<<endl;
    cin>>n;
    for(int k=0;k<numbers;k++)
    {
        s[k].get_assignment(n);
        s[k].final_sequency(n); 
    };

    return 0;
}
