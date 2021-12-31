#include<stdio.h>
int main()
{
int num1,num2;
int *a=&num1,*b=&num2;
printf("Enter two numbers::");
scanf("%d %d",a,b);
if(*a>*b)
{printf("maximum=%d",*a);}
else
{printf("maximum=%d",*b);
}
}
