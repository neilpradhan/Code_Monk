##Bit manipulation problem

## link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/



#include <iostream>

using namespace std;

long largest_power(long N)
    {
        //changing all right side bits to 1.
        N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);


    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by
                return (N+1)>>1;

    }

int main() {
	int T,i;
	long N,M;
	cin >> T;
	for (i=0;i<T;i++)
	{
	    int c=0;
	    cin >> N;
	    while(N!=0)
	    {
	        c+=N%2;
	        N=N/2;
	    }
	        
	    cout <<  c << endl;	    
	}
		// Writing output to STDOUT
    return 0;		
}
