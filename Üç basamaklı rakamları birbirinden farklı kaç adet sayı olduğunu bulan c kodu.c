#include <stdio.h>
#include <stdlib.h>
//�� basamakl� rakamlar� birbirinden farkl� ka� say� vard�r?
int main()
{
    int sayac=0;
    int i;
    int a,b,c;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a!=b && a!=c && b!=c)
        {
            sayac++;
        }
    }
    printf("Uc basamakli rakamlari birbirinden farkli %d sayi vardir",sayac);

    return 0;
}
