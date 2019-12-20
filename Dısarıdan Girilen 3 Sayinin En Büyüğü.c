#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,z,enb;

    printf(" 3 tane sayi giriniz : \n");
      scanf("%d %d %d",&x,&y,&z);

      if(x>y){

           if(x>z)
                  {
                   enb = x;
                   }

           }
      else
           {
              if(y>z)
                  {
                   enb = y;
                   }
                   else
                   {
                        enb = z;
                   }

           }

           printf ("Girilen en buyuk sayi %d", enb);

    getch();

    return 0;
}
