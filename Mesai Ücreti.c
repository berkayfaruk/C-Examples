#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mesai;
    printf("Kac saat mesai yaptiniz: ");
   scanf("%d",&mesai);

    if(mesai<10)
    {
        printf("%d",mesai*5);
    }
    else if(mesai>=10 && mesai<20)
    {
        printf("%d",10*5+(mesai-10)*3);
    }
    else
        printf("%d",10*5+10*3+(mesai-20)*2);
    return 0;
}
