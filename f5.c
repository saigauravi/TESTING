#include<stdio.h>
int prime(int n)
{for(int i=2;i<n/2;i++)
{if(n%i!=0)
continue;
else
return 1;}
return 0;
}
int main()
{
int n,p;
printf("Enter a number:");
scanf("%d",&n);
p=prime(n);
if(p==0)
{printf("%d is a prime number",n);
}
else
{printf("%d is  not a prime number",n);
}
}
