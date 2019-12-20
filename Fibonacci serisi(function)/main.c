#include <stdio.h>
#include <stdlib.h>

int fibo(int);
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",fibo(x));

    return 0;
}
int fibo(int x)
{
    int a=1,b=1,c=0;
    printf("%d ",a);
    printf("%d" ,b);
    for(int i=0;i<x;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }


    return c;
}
