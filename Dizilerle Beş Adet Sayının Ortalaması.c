#include <stdio.h>
#include <stdlib.h>

int main()
{
    float toplam=0;
    float sayilar[5];
    int i=0;
    for(;i<5;i++)
    {
        scanf("%f",&sayilar[i]);
    }
    for(i=0;i<5;i++)
    {
        toplam=toplam+sayilar[i];
    };
    printf("Girdiginiz sayilarin aritmatik ortalamasi %.2f dir.",toplam/5);

    return 0;
}
