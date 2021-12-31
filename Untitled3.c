#include<stdio.h>
int main()
{
int n;
printf("Enter size of the array::");
scanf("%d",&n);
int a[n];
printf("Enter the array elements::");
for(int i=0;i<n;i++)
{scanf("%d",&a[i]);
}
int max_so_far=0;
int max_end_here=0;
for(int i=0;i<n;i++)
{
     max_end_here+=a[i];
     if(max_so_far< max_end_here)
        max_so_far=max_end_here;
     if(max_end_here<0)
     max_end_here=0;
}
printf("Largest sum =%d",max_so_far);
}
