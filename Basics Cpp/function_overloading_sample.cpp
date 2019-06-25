#include<iostream>
using namespace std;


double calc_Gross_Pay(float,float,float);
double calc_Gross_Pay(float,float);
double calc_Gross_Pay(float = 5000);


int main()
{
	int choice;
	double gross;


	//1 is regular employee
	//2  is daily wages
	//3 is consolidated
	//4 is consolidated different pay
	cin>> choice;
	if(choice == 1)
	{
		float basic,da,hra;

		cin>> basic>>da>>hra;
		cout<<calc_Gross_Pay(basic,da,hra);

		gross = basic + da/100*basic + hra;

	}

	else if (choice == 2)
	{
		float hours;
		float wages_hr;
		cin>> hours>>wages_hr;
		cout<<calc_Gross_Pay(hours,wages_hr);
	}

	else if (choice == 4)
	{
		float pay;
		cin>>pay;
		cout<< calc_Gross_Pay(pay);
	}

	else if (choice == 3)
	{
		cout << calc_Gross_Pay();
	}
}
	double calc_Gross_Pay(float basic, float da,float hra)
	{
		return basic + da/100*basic + hra;
	}
	

	double calc_Gross_Pay(float hr, float wg)
	{
		return hr *wg;

	}

	double calc_Gross_Pay(float p)
	{
		return p;
	}
