#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter size:");
scanf("%d",&n);
int a[n],b[n];
printf("ENTER THE ELEMENTS OF FIRST ARRAY:: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENTS OF SECOND ARRAY:: ");
for(int j=0;j<n;j++)
{
scanf("%d",&b[i]);
}
int count,m1=-1,m2=-1;
for(count =0;count<=n;count++)
{
if(i==n)
{m1=m2;
m2=b[j];
break;}
else if(j==n)
{m2=m1;
m1=a[i];
break;}
if(a[i]<b[j])
{m1=m2;
m2=a[i];
i++;
}
else
{m1=m2;
m2=b[j];
j++;
}
}
printf("%d",(m1+m2)/2);
}
