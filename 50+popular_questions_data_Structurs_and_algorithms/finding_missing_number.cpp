// Find the Missing Number
// You are given a list of n-1 integers and these integers are in the range of 1 to n. 
// There are no duplicates in the list. One of the integers is missing in the list. 
// Write an efficient code to find the missing integer.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int find_missing_number(int a[],int n)
{
	int t = (n+1) * (n+2)/2;

	for(int i=0;i<n;i++)
	{
		t = t-a[i];
     
	}
  return t;


}

int main()
{
    int arr[ ]= {1,2,4,5,6};

    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = find_missing_number(arr,n);
    cout <<miss<<endl;
    cout<<n;
    //int m  =sizeof(arr);
    //cout<<"m"<<m;


}
