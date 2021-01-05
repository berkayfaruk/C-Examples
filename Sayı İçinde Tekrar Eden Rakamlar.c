#include <stdio.h>
#include <stdlib.h>
//Kullanýcýnýn girdiði tekrar eden sayý adetini döndüren kod
int rakamBul(int sayi,int rakam)
{
    int i=0, kalan;
    while(sayi!=0)
    {
        kalan=sayi%10;
        if(kalan==rakam)
            i++;
        sayi=sayi/10;
    }
    return i;
}
int main()
{
    int sayi,rakam;
   printf("bir sayi ve bir rakam giriniz:");
   scanf("%d %d",&sayi,&rakam);
   printf("%d rakamindan %d sayisin da %d adet vardir.",rakam,sayi,rakamBul(sayi,rakam));
    return 0;
}
