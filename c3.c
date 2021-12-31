#include<stdio.h>
int fact(int n)
{
int f=1,num=0;
while(num<=n-1)
{f=f+f*num;
num++;}
return f;
}
main()
{
int sum;
for(int i=1;i<=5;i++)
{sum+=fact(i)/i;}
printf("sum=%d",sum);
}
