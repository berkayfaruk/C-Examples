#include <stdio.h>
// girilen iki sayı arsındaki asal sayıları bulma
int main(void) {
    int deger1,deger2;
    printf("İlk Sayi: ");
    scanf("%d",&deger1);
    printf("Son Sayi: ");
    scanf("%d",&deger2);
    int flag;
    for(int i=deger1;i<=deger2;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
  return 0;
}