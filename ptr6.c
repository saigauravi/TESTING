#include<stdio.h>
int main()
{
int n;
printf("Enter size:");
scanf("%d",&n);
int a[n];
int *p=a;
printf("ENTER THE ELEMENTS OF TE ARRAY::\n");
for(int i=0;i<n;i++)
{
scanf("%d",p);
p++;}
p=a;
printf("The elements are::\n");
for(int i=0;i<n;i++)
{
printf("%d ",*p);
p++;}
}
