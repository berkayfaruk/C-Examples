#include <stdio.h>
#include <stdlib.h>
//b:Bosluk Sayisi
//y=Yildiz Sayisi
int main()
{
    int s;
    int y,b;
    int i,j;
    printf("Satir sayisini giriniz: ");
    scanf("%d",&s);
    printf("\n");
    y=1;
    b=s/2;

    for(i=0;i<s;i++)
    {
        for(j=0;j<b;j++)
        {
            printf(" ");
        }
        for(j=0;j<y;j++)
        {
            printf("*");
        }
        if(i<s/2)
        {
            y=y+2;
            b--;
        }
        else
        {
            y=y-2;
            b++;
        }
        printf("\n");

    }










    return 0;
}
