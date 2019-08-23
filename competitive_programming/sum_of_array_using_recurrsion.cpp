
#include<iostream>
using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
    
    
    if (n==0){
        return 0;
    }
    
    if (n==1){
    return input[0];
    }

    int total =input[0]+ sum(input+1,n-1);
    

    
    
    

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
