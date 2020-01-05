#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    for (i=1;i<=sayi;i++)
    {
        if(sayi%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
