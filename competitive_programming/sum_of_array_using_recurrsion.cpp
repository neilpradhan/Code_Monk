
#include<iostream>
using namespace std;

int sum(int input[], int n) {

    
    
    
    if (n==0){
        return 0;
    }
    
    if (n==1){
    return input[0];
    }

    int total =input[0]+ sum(input+1,n-1);
    
// solving same problem by recussively diving array in two parts for odd number of elements
//int total = sum(input,(n+1)/2) +sum(input+(n+1)/2,(n+1)/2);		
    
    
    

}



int main(){
int N;
cin>>N;
cout<<endl;

int a[N];
for (int i =0;i<N;i++){


	cin>>a[i];

}

int k =sum(a,N);

cout<<k;



}
