#include <stdio.h>
#include <math.h>



int usal(int,int);
int SeriHesapla(int,int,int);
int main()
{

    printf("%d",pow(5,3));
    int a,b,c;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);
    SeriHesapla(a,b,c);
    return 0;
}
int SeriHesapla(int a,int b,int c)
{

    int i=0,carpim=0,topla=0;
    for(;i<c;i++)
    {
        carpim=((1+usal(a,i))*(1+usal(b,i)));
        printf("%d ",carpim);
        topla=topla+carpim;
    }
    printf("\nToplam Sonuc:%d  ",topla);
    return carpim;

}

int usal(int sayi,int us)
{
    int j,sonuc=1;
    if(us==0)
    {
        sonuc=1;
    }
    else
    {
    for(j=1;j<=us;j++)
        {
        sonuc=sonuc*sayi;
        }

    }
    return sonuc;
}
