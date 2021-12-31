#include<stdio.h>
#include<string.h>

int main()
{
char str[]="abcd";
int n=strlen(str);
printf("The permutations of the strings are ::");


}
void swap(char *x,char *y)
{char temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
void Permutation(int *cht,int stno,int endno)
{
    if(stno==endno)
    {
    printf("%s ",cht);
    }
    else{
        for(int i=stno;i<=endno;i++)
        {
            swap((cht+stno),(cht+i));

        }
    }
}
