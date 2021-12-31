#include<stdio.h>
int main()
{
int n,i;
printf("Enter size::");
scanf("%d",&n);
int a[n];
int RptElt=0,index=0;
printf("Enter the array elements::");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
if(a[i]==a[j])
{RptElt=a[i];
index=i;
}

}
printf("First repeating elements is %d whose index is %d",RptElt,index+1);
}
