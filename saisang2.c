#include<stdio.h>
int main()
{
int arr[]={1,5,3,4,2};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
int count =0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
if(arr[j]-arr[i]==k||arr[i]-arr[j]==k)
count++;}
printf("%d",count);
}
