#include<stdio.h>
int main()
{ int n,i;
scanf("%d",&n);
    char a[100]="i love sai";
    int start=0,end=0;
    while(i<n && a[i]==" ")
    {

        start=i;
        i++;
    }

     while(i<n && a[i]!=" ")
     {
         end=i-1;
         i++;
     }
     while(end > start)
        {char temp=a[start];

a[start]=a[end];
a[end]=temp;
start++;
end--;
}
}
