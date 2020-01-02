#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,fact,i,degisken;
    printf("ilk sayiyi giriniz");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz");
    scanf("%d",&sayi2);
    degisken=sayi1;
    while(degisken<sayi2-1)
    {
        fact=1;
        degisken=degisken+1;
        for(i=1;i<=degisken;i++)
        {
            fact=fact*i;
        }
        printf("%d\n",fact);
    }

    return 0;
}
