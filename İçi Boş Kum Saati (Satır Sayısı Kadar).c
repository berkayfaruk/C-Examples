#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i,j;

    printf("Satir sayisini giriniz: ");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++)
    {
        for(j=1;j<=sayi;j++)
        {
            if(i==1 || i==sayi)
            {
                printf("*");
            }

       else if((i+j)==sayi+1||i==j)
                printf("*");
                else
                    printf(" ");
        }
        printf("\n");

    }

    return 0;
}
