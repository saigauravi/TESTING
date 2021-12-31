#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7};
int k=5;
int n=sizeof(a)/sizeof(a[0]);
k=k%n;
for(int i=0;i<n;i++)
{
if(i<k)
{
printf("%d",a[n+i-k]);}
else
{printf("%d",a[i-k]);
}}
printf("\n");
}
