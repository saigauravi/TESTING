#include<stdio.h>

{int f(int *p, int n)

{

    if (n <= 1)
return 0;

    else return f(p+1,n-1)+p[0]-p[1];

}

int main()

{

    int a[] = {3,5,2,6,5};

    printf("%d", f(a,5));

}
}
