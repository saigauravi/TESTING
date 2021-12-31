#include<stdio.h>
int main()
{
int r=3;
int c=3,sum=0;
int a[r][c];
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("Enter the element at a[%d][%d] :: ",i,j);
scanf("%d",&a[i][j]);
if(i<j)
sum+=a[i][j];
}}
printf("%d",sum);
}
