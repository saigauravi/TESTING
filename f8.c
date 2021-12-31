#include<stdio.h>
int main()
{
int r1,rn;
printf("ENTER RANGE:");
scanf("%d %d",&r1,&rn);
for(int i=r1;i<rn;i++)
{
if(checkperf(i))
printf("%d ",i);
}}
int checkperf(int n)
{
int ld,sum=0;
for(int i=1;i<n;i++)
{if(n%i==0)
    sum+=i;
}
return(n==sum);
}
