/*Given the size and the elements of array A, print all the elements in reverse order.

Input: 
First line of input contains, N - size of the array. 
Following N lines, each contains one integer, i{th} element of the array i.e. A[i].

Output: 
Print all the elements of the array in reverse order, each element in a new line.
*/



#include <iostream>

using namespace std;

int main() 
{
	int N;
	cin >> N;
	int arr[N],m,i;
	for (i=0;i<N;i++)
	{   cin>>arr[i];
	
	}
/*	cout<<N<<endl;*/
    for(int idx=1; idx<=N; idx++)
    {
        // Print out each element in a new line
        cout << arr[N-idx] << endl;
    }
	return 0;
}	
