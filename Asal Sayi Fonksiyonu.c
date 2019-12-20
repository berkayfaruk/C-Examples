#include <stdio.h>
#include <conio.h>
int asal(int);
int main()
{
   int sayi;
   printf("bir sayi giriniz");
   scanf("%d",&sayi);
   asal(sayi);
   getch();

   return 0;
}
int asal(int sayi)
{

   int flag=0;
   for(int i=2;i<sayi;i++)
   {
       if(sayi%i==0)
       {
            flag=1;
            break;
       }

   }
   if(flag==0)
        printf("Sayi asal");
    else
        printf("sayi asal degil");
   return flag;
}













