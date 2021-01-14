#include <stdio.h>
#include <stdlib.h>
int asalMi(int sayi);
int main()
{
    int dizi[10];
    int sayi,eb=0;

    for(int i=0;i<10;i++)
    {
        printf("%d. sayiyi giriniz:" ,i+1);
        scanf("%d",&sayi);
        dizi[i]=sayi;
        if(dizi[i]>eb && asalMi(dizi[i])==1)
            eb=dizi[i];
    }
    printf("En buyuk asal sayi: %d",eb);

    return 0;
}
int asalMi(int sayi)
{
    int flag=0;
    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            flag=1;
            return 0;//asal degil
            break;
        }
    }
    if(flag==0)
        return 1;//asal
}
