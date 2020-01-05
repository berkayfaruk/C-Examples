#include <stdio.h>
#include <stdlib.h>
//Bir bakteri türü her saat baþý kendini ikiye bölerek çoðalmaktadýr.Bu labaratuvarda 1 gün sonra kaç tane bakteri olur?
int main()
{
    int sayi=1;
    int i;
    for(i=1;i<=24;i++)
    {
        sayi=sayi*2;
    }
    printf("%d",sayi);
    return 0;
}
