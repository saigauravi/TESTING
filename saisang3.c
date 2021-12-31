#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7};
int k=2;
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<k;i++)
{
for(int j=1;j<n;j++)
{int temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;}
}
printf("After rotation::");
for(int i=0;i<n;i++)
printf("%d",a[i]);
}

