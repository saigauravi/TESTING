#include<stdio.h>
int swap(int a,int b)
{int temp;
temp=a;
a=b;
b=temp;
//printf("a=%d and b=%d after calling\n",a,b);
}
int main()
{
int a,b,temp;
printf("Enter the two integers:");
scanf("%d %d",&a,&b);
printf("a=%d and b=%d before calling\n",a,b);
swap(a,b);
printf("a=%d and b=%d after calling\n",a,b);}
