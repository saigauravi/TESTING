#include<stdio.h>
int main()
{
int n,m,i,j,k;
printf("Enter size1:");
scanf("%d",&n);
printf("Enter size2:");
scanf("%d",&m);
int a[n],b[n],c[n+m];
printf("ENTER THE ELEMENTS OF FIRST ARRAY:: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENTS OF SECOND ARRAY:: ");
for(int j=0;j<m;j++)
{
scanf("%d",&b[i]);
}
i=0;j=0;k=0;
while(i<n && j<m)
{
    if(a[i]<b[j])
        {c[k]=a[i];
    i++;
    k++;
        }
    else
       {
           c[k]=b[j];
           k++;
           j++;
}
}
for(i=0;i<m+n;i++)
{
    printf("%d",c[i]);
}
}
//while(i<)
