#include<stdio.h>
int main()
{
int max1,min1,max2,min2;
int n;
printf("Enter size of the array::");
scanf("%d",&n);
int a[n];
printf("Enter the array elements::");
for(int i=0;i<n;i++)
{scanf("%d",&a[i]);
}
max2=min2=max1=min1=a[0];
for(int i=1;i<n;i++)
{if(a[i]>max1)
max2=max1;
max1=a[i];
if(a[i]<min1)
min2=min1;
min1=a[i];
}
printf("second maximum=%d\n",max2);

printf("second minimum =%d\n",min2);
}
