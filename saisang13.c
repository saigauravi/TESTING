#include<stdio.h>
int main()
{
int n;
printf("Enter size of the array::");
scanf("%d",&n);
int a[n];
printf("Enter array elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int x,i=0,j=1,found =0;
printf("ENTER THE SUM::");
scanf("%d",&x);
while(i<n-1) // searching for the two elements
{
if(a[i]+a[j] == x) { // if sum is equivalent then break
found = 1;
break;
}
else
j++;
if(j==n) {
i++;
j = i+1;
}
}
if(found)
printf("Sum of %d and %d = %d\n", a[i], a[j], x);
else
printf("Sum does not Exist\n");
return 0;
}
