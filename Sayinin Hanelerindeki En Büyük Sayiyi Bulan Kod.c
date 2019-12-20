#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,b=0,max=0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    while(sayi!=0)
    {
        b=sayi%10;
        if(b>max)
            max=b;
        sayi=sayi/10;
    }
    printf("Hanedeki en buyuk sayi= %d",max);

    return 0;
}
