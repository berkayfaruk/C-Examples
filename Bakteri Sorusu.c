#include <stdio.h>
#include <stdlib.h>
//Bir bakteri t�r� her saat ba�� kendini ikiye b�lerek �o�almaktad�r.Bu labaratuvarda 1 g�n sonra ka� tane bakteri olur?
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
