#include<stdio.h>
int main()
{
char str[50];
char *p;
gets(str);
int n=strlen(str),vcount,Ccount=0;
p=str;
while(*p!='\0')
{
if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
{vcount++;}
else
{Ccount++;}
p++;
}
printf("The number of vowels =%d\n",vcount);
printf("The number of consonant =%d\n",Ccount);
}
