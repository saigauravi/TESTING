#include<stdio.h>
int main()
{
int n,i;
printf("Enter size::");
scanf("%d",&n);
int a[n];
int min;
printf("Enter the array elements::");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{for(int j=1;j<n;j++)
{
if(a[i]!=j)
    min=j;
    break;
}}
printf("%d",min);
}
