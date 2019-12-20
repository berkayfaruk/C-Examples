#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j;
    printf("Satir sayisini giriniz");
    scanf("%d",&satir);
    printf("Sutun sayisini giriniz");
    scanf("%d",&sutun);

    for(i=0; i<satir; i++)
    {
        if(i==0 || i==satir-1)
        {
            for(j=0;j<sutun;j++)
            {
                if(j==0 || j==sutun-1)
                    printf("0");
                else
                    printf("1");
            }
        }
        else
        {
            for(j=0;j<sutun;j++)
            {
                if(j==0 || j==sutun-1)
                    printf("1");
                else
                    printf("0");
            }

        }
        printf("\n");

    }

    return 0;
}
