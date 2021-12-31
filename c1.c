#include<stdio.h>
int square(int n)
{
int s;
s=n*n;
return s;}
int main()
{ int n,s;
printf("Enter a number::");
scanf("%d",&n);
s=square(n);
printf("%d",s);
}
