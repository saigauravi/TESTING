#include<stdio.h>
int n;
int main(){
printf("Enter size:");
scanf("%d",&n);
int a[n],p;
printf("Enter the array elements:: ");
for(int i=0;i<n;i++)
{printf("element-%d:",i);
scanf("%d",&a[i]);
}
p=findLargest(a);
printf("LARGEST= %d",p);}
int findLargest(int arr[])
{int max;
max=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]>max)
max=arr[i];}
return max;
}
