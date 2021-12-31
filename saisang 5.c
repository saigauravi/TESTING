#include<stdio.h>
int main()
{
int max,min;
int n;
printf("Enter size of the array::");
scanf("%d",&n);
int a[n];
printf("Enter the array elements::");
for(int i=0;i<n;i++)
{scanf("%d",&a[i]);
}
max=min=a[0];
for(int i=1;i<n;i++)
{if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("max =%d\n",max);
printf("min=%d\n",min);
}
