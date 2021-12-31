#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
printf("Enter size:");
cin>>n;
int b0=0,b1=0,b2=0;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];

if(a[i]==0)
{
b0++;}
else if(a[i]==1)
{
b1++;}
else
{
b2++;}
}
int i=0;
while(b0>0)
{
 a[i++]=0;
 b0--;
}
while(b1>0)
{
 a[i++]=1;
 b1--;
}
while(b2>0)
{
 a[i++]=2;
 b2--;
}
for(int i=0;i<n;i++)
cout<<" "<<a[i];
}
