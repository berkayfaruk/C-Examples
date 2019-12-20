#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,boyut;
    printf("Boyut giriniz");
    scanf("%d",&boyut);
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if((i+j)==boyut+1||i==j)
                printf("*");
                else
                    printf(" ");
        }
        printf("\n");
    }



    return 0;
}
