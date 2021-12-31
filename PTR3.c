#include<stdio.h>
int main()
{
int p=5,q=6,r=7;
int *a=&p;
int *b=&q;
int *c=&r;
printf("USING &(address of) OPERATOR\n");
printf("Address of p=%d\n",&p);
printf("Address of q=%d\n",&q);
printf("Address of r=%d\n",&r);
printf("USING *(VALUE AT ADDRESS) OPERATOR\n");
printf("value of p=%d\n",*a);
printf("value of q=%d\n",*b);
printf("value of r=%d\n",*c);

}
