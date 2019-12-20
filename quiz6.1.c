#include <stdio.h>
#include <stdlib.h>
int serihesapla(int,int);
int faktoriyel(int);
int main()
{
    int a,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("\nSerilerin toplami: %d",serihesapla(a,b));



    return 0;
}
int serihesapla(int a,int b)
{
    int sonuc=0,i,tem=0;
    printf("Serinin Terimleri: ");
    for(i=0;i<b;i++)
    {
        tem=tem +faktoriyel(i*a);
        printf("%d  ",tem);
        sonuc=sonuc+tem;
        tem=0;
    }
    return sonuc;


}
int faktoriyel(int f)
{
    int i,fact=1;
    if(f==0)
    {
        fact=1;
    }
    else
        for(i=1;i<=f;i++)
    {
        fact=fact*i;
    }
    return fact;
}
