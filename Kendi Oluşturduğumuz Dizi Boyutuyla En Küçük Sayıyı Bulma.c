#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[4];
    int i,X;
    do
    {
        printf("Kac Sayi Gireceksiniz?(max:4)");
        scanf("%d",&X);
    }
    while(X>4);

    for(i=0;i<X;i++)
        {
            printf("Sayi Giriniz:");
            scanf("%d",&sayilar[i]);
        }
    int ek=sayilar[0];
    for(i=1;i<X;i++)
    {
        if(sayilar[i]<ek)
        {
            ek=sayilar[i];
        }
    }
    printf("En kucuk sayi: %d",ek);

    return 0;
}
