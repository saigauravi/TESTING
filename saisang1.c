#include<stdio.h>
int main()
{
int arr[]={1,9,8,4,0,0,2,7,0,6,0};
int n=sizeof(arr)/sizeof(arr[0]);
int count ={0};
for(int i=0;i<n;i++)
{
if(arr[i]!=0)
{arr[count++]=arr[i];
}
}

while(count<n)
{arr[count++]=0;
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
