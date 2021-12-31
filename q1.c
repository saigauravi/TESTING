#include<stdio.h>
int main()
{
int n,v0;
printf("Enter size of the array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==0)
{
v0++;}
int i=n;
while(v0>0)
{
a[i--]=0;
v0--;}
}
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
