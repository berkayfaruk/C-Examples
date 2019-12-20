#include <stdio.h>
#include <stdlib.h>
int comb(int,int);
int fact(int);
int main()
{
    int x,y;
    printf("Ýki tane sayi giriniz");
    scanf("%d%d",&x,&y);
    printf("Kombinasyon= %d",comb(x,y));

    return 0;
}
int fact(int x)
{
    int sonuc=1;
    for(int i=1;i<=x;i++)
    {
        sonuc=sonuc*i;
    }
    return sonuc;
}
int comb(int x,int y)
{
    int islem;
     islem=fact(x)/(fact(y)*fact(x-y));
     return islem;

}
