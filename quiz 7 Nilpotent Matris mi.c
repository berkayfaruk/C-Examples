#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int boyut;

int nilpotent_mi(int[boyut][boyut]);
int main()
{
    srand(time(NULL));
    printf("Matrisin boyutunu giriniz: ");
    scanf("%d", &boyut);
    int matris[boyut][boyut];



    printf("\n\nOlusturulan matris:\n");
    for(int i = 0; i< boyut; i++)
    {
        for(int k = 0; k< boyut; k++)
        {
            matris[i][k] = rand()%20 - rand()%10;
            printf("%d ",matris[i][k]);
        }
        printf("\n");
    }


    int x = nilpotent_mi(matris);
    if(x == 0)
        printf("\nMatris nilpotent DEGILDIR!.");
    else
        printf("\nMatris nilpotent dir");

    return 0;
}




int nilpotent_mi(int matris[boyut][boyut])
{
    int i,j,k;
    int matriscarp[boyut][boyut];
    int toplam=0;

    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            for(k=1;k<boyut;k++)
            {
                toplam=toplam+(matris[i][k]*matris[k][j]);
                matriscarp[i][j]=toplam;
            }
        }

    }
    for(i=1;i<=boyut;i++)
    {
        for(k=1;k<boyut;k++)
        {
            if(matriscarp[i][k]!=0)
            {
                return 0;
            }
        }
    }
    return 1;
}


