#include<stdio.h>
int main()
{
int a,b,sum=0;
printf("Enter two numbers::");
scanf("%d %d",&a,&b);
sum=add(&a,&b);
printf("sum=%d",sum);
}
int add(int *a,int *b)
{
int sum=0;
sum=*a+*b;
return sum;}
