##Implementation problem 
## link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/tutorial/


#include <stdio.h>
#include<string.h>
int main()
{
int c[10],i,p,len;
char s[100];
gets(s);
len=strlen(s);
for(i=0;i<10;i++)
{
c[i]=0;//0 to 9
}
for(i=0;i<len;i++)
{
p=s[i]-48;
c[p]++;
//printf("%d",s);
}
for(i=0;i<10;i++)
{
printf("%d %d\n",i,c[i]);

}
return 0;
}
