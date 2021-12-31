#include<stdio.h>
int main()
{
int n,i;
printf("Enter size::");
scanf("%d",&n);
int a[n];
int count=0;
printf("Enter the array elements::");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{if(a[i]==0)
count++;
}
for(int i=0;i< count;i++)
a[i]=0;
for(int i=count;i<n;i++)
a[i]=1;

for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
