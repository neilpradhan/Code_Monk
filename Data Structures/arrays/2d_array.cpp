/*Given a 2D array A, your task is to convert all rows to columns and columns to rows.

Input: 
First line contains 2 space separated integers, N - total rows, M - total columns. 
Each of the next N lines will contain M space separated integers.

Output: 
Print M lines each containing N space separated integers.
*/


#include <iostream>

using namespace std;

int main() {
	int R,C;
	cin >>R>>C;
	int A[R][C];
    for (int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>A[i][j];
        }
    }

    for (int i=0;i<C;i++)
    {
        for(int j=0;j<R;j++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
}
