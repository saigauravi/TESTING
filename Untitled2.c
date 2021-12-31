#include<stdio.h>
int main()
{
char a[100];
for(int i=0;i<100;i++)
{
scanf("%c",&a[i]);}

for(int i=100;i>0;i--)
{
printf("%c",a[i]);}
}
