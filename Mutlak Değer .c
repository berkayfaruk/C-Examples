#include <stdio.h>
#include <stdlib.h>
int mutlak_deger(int);
int main()
{
    int sayi,sonuc;
    printf("sayi girin");
    scanf("%d",&sayi);
    sonuc=mutlak_deger(sayi);
    printf("|%d|=%d",sayi,sonuc);
    return 0;
}
int mutlak_deger(int x)
{
    int y;
    if(x>=0)
    {
        y=x;
    }
    else
    {
        y=-1*x;
    }
    return y;
}
