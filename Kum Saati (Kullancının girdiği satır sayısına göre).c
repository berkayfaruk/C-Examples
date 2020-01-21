#include <stdio.h>
#include <stdlib.h>
//bs:Boþluk Sayisý
//ys: Yýldýz Sayisý
int main()
{
    int satir,bs,ys,i,j;
    printf("Satir sayisini giriniz");
    scanf("%d",&satir);
    bs=0;
    ys=satir;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<ys;j++)
        {
            printf("*");
        }

            if(i<(satir/2))
            {
                ys=ys-2;
                bs++;
            }
            else
            {
                ys=ys+2;
                bs--;
            }
        printf("\n");

        for(j=0;j<bs;j++)
        {
            printf(" ");
        }
    }





    return 0;
}
