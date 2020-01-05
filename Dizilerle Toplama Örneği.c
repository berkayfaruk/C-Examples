#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[5];
    int i,toplam=0;
    for(i=0;i<4;i++)
    {
        printf("Bir adet sayi giriniz: ");
        scanf("%d",&sayilar[i]);
    }
    for(i=0;i<4;i++)
    {
        toplam=toplam+sayilar[i];
    }
    printf("%d",toplam);

    return 0;
}
