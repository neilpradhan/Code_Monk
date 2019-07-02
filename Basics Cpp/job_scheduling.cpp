// Based on time required to complete job
// Based on memory required to complete job

#include<iostream>
using namespace std;
class job
{
    int id;
    char name[20];
    float time;
    float space;
    public:
    void get();
    void print();
    int get_id();
    float get_Time();
    float get_space();

};



class job_scheduling
{   protected:// we need to inherit from this class hence we put all attributes  in protected

    int num_of_jobs;
    job jobs[20];

    public:

    void get();
    void print();
    void schedule();

};

class time_job_scheduling : public job_scheduling
{
    public:

    void schedule();

};

class space_job_scheduling :public job_scheduling
{
    public:
    void schedule();

};


void job::get()
{
    cin>>id>>name>>time>>space;
};

void job::print()
{
    cout<<id<<name<<time<<space;
}

int job::get_id()
{
    return id;
};


float job::get_Time()
{
    return time;
};

float job::get_space()
{
    return space;
};


void  job_scheduling::get()
{   cout<<"Enter number of jobs \n"<<endl;
    cin>>num_of_jobs;
    for(int i=0;i<num_of_jobs;i++)
    {   cout<<"id name time space \n";
        jobs[i].get();
    };

};

void  job_scheduling::print()
{
    cin>>num_of_jobs;
    for(int i=0;i<num_of_jobs;i++)
    {
        jobs[i].print();
    };

};


void job_scheduling::schedule()
{
    cout<<" Base class scheduling is called"<<endl;
    int i,k;
    job t;
    for(int i=0;i<num_of_jobs;i++)
    {
        for(int k=i+1;k<num_of_jobs;k++)
        {
            if(jobs[i].get_id()>jobs[k].get_id())
            {
                t = jobs[i];
                jobs[i] = jobs[k];
                jobs[k] = t;
        
            };
        };
    };
};


void time_job_scheduling::schedule()
{
    cout<<"Time based scheduling is called"<<endl;
    int i,k;
    job t;
    for(int i=0;i<num_of_jobs;i++)
    {
        for(int k=i+1;k<num_of_jobs;k++)
        {
            if(jobs[i].get_id()>jobs[k].get_id())
            {
                t = jobs[i];
                jobs[i] = jobs[k];
                jobs[k] = t;
        
            };
        };
    };
};


void space_job_scheduling::schedule()
{
    cout<<"Space based scheduling is called"<<endl;
    int i,k;
    job t;
    for(int i=0;i<num_of_jobs;i++)
    {
        for(int k=i+1;k<num_of_jobs;k++)
        {
            if(jobs[i].get_id()>jobs[k].get_id())
            {
                t = jobs[i];
                jobs[i] = jobs[k];
                jobs[k] = t;
        
            };
        };
    };
};


int main()
{
    job_scheduling *js;// only pointer of base can store address of object and not vice versa
    time_job_scheduling tjs;
    space_job_scheduling sjs;
    js = new job_scheduling();
    // allocating memory
    int choice;
    cout<<"Enter choice \n";
    cin>>choice;
    if(choice ==1)
    {
        tjs.get();
        js = &tjs;

    };
    {
        /* code */
        sjs.get();
        js = &sjs;
    };
    js->schedule();
    js->print();


}