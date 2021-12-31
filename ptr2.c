#include<stdio.h>
int main()
{
int ptr=5;
int *a=&ptr;
printf("Value of ptr=%d\n",*a);
printf("Value of ptr=%d\n",ptr);
printf("Address of ptr=%d\n",a);
printf("Address of ptr=%d\n",&ptr);

}
