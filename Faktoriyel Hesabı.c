#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int faktor=1;
   printf("Bir sayi giriniz: ");
   scanf("%d",&sayi);
   for(int i=1;i<=sayi;i++)
   {
       faktor=faktor*i;
   }
   printf("%d",faktor);

    return 0;
}
