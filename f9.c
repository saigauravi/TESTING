#include<stdio.h>
int n;
int main(){
printf("Enter size:");
scanf("%d",&n);
int a[n],p,q;
printf("Enter the array elements:: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=findLargest(a);
q=findMinimum(a);
printf("MAXIMUM= %d\n",p);
printf("MINIMUM= %d\n",q);}
int findLargest(int arr[])
{int max;
max=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]>max)
max=arr[i];}
return max;
}
int findMinimum(int arr[])
{int min;
min=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]<min)
min=arr[i];}
return min;
}
