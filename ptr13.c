#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size::");
    scanf("%d",&n);
int a[n],*ptr;
ptr=&a[0];
printf("Enter the array elements:: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);}
ptr=&a[n-1];
printf("elements after reversing::");
for(i=0;i<n;i++)
{
printf("%d ",*ptr--);}

}
