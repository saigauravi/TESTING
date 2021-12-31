#include<stdio.h>
#include<string.h>
int main()
{
char *str;
printf("Enter a sring::");
gets(str);
int n=strlen(str);
printf("After reversing te sring is::");
for(int i=n;i>=0;i--)
{printf("%c",*(str+i));}
}
