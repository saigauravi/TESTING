#include<stdio.h>
int checkperf(int n)
{
int ld,sum=0;
for(int i=1;i<n;i++)
{if(n%i==0)
    sum+=i;
}
return(n==sum);
}
int checkArmstrong(int n1)
{
int ld,sum,N;
sum=0;
N=n1;
    while(n1>0)
    {ld=n1%10;
    sum+= ld*ld*ld;
    n1=n1/10;
    }
    return(N==sum);
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(checkperf(num))
    {
        printf("%d is a perfect number\n",num);
    }
    else {
        printf("%d is not a perfect number\n",num);
    }

     if(checkArmstrong(num))
    {
        printf("%d is an Armstrong number\n",num);
    }
    else {
        printf("%d is not an Armstrong number\n",num);
    }

}
