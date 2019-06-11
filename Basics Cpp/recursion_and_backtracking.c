## Recursion and Backtracking 
## link : https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/tutorial/




#include <stdio.h>
#include <stdbool.h>
#include<string.h>
//dont read before trying by yourself. This is just for reference if your code has some little bug. Have fun:)

bool isAttacking(int sz, int board[sz][sz], int x, int y)
{
for(int i=0; i<sz; i++)
{
for(int j=0; j<sz; j++)
{
if(i==x || j==y || (i+j)==(x+y)|| (i-j)==(x-y))
{
if(board[i][j]==1)
return true;
}
}
}
return false;
}











// this function is meant to fill all the N queens on the board
bool N_Queen(int sz, int board[sz][sz], int N)
{
if(N==0)
{
return true;
}
for(int i=0; i<sz; i++)
{
for(int j=0; j<sz; j++)
{
if(isAttacking(N, board, i, j))
{
continue;
}

// it will check for all i and j and only come out when those are acceptable and non attacking

board[i][j]=1;// queen filled now check for N-1 in next line

if(N_Queen(sz, board, N-1))
{
return true;
}

//printf("to know  if code goes here");
board[i][j]=0;// Dont know what this means 

}
}
return false;
}







void display(int sz, int a[sz][sz])
{
for(int i=0; i<sz; i++)
{
for(int j=0; j<sz; j++)
{

printf("%d ", a[i][j]);
}
printf("\n");
}
}





int main()
{ 
int N;//number of queens to be placed
scanf("%d", &N);
int sz=N; 
int board[sz][sz];

memset(board, 0, sizeof(board[0][0]) * sz * sz);
if(N_Queen(sz, board, N))
{
printf("YES\n");
display(sz, board);
}
else{
printf("NO\n");
}

return 0;
}
