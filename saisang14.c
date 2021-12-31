#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter size of the array::");
scanf("%d",&n);
int a[n];
printf("Enter array elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{count++;
int index=a[i];}
}
}
if(count>n/2)
{printf("yes\n");
printf("%d",count);}
else
{printf("No\n");}
}
