#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int us_alma(int,int);
int main()
{
    int sayi,basamak=0,temp,k=0,mod;
    printf("Lutfen bir sayi giriniz");
    scanf("%d",&sayi);
    temp=sayi;
    while(temp!=0)
    {
        temp=temp/10;
        basamak++;

    }
    temp=sayi;
    while(temp!=0)
    {
        mod=temp%10;
        k=k+us_alma(mod,basamak);
        temp=temp/10;

    }
    if(sayi==k)
    {
        printf("%d sayisinin armstrongu %d dir",sayi,k);
    }
    else{
            printf("armstorng degildir");
    }

    return 0;
}
int us_alma(int sayi,int ussu)
{
    int sonuc=1;
    for(int i=0;i<ussu;i++)
    {
        sonuc=sonuc*sayi;
    }
    return sonuc;

}
