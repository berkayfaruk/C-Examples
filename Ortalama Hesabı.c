#include <stdio.h>
#include <stdlib.h>

int main()
{
float ogrencisayisi=0;
int notu;
float toplam=0;
float ortalama;

while(notu!=-1)
{
    printf("Not Giriniz: ");
    scanf("%d",&notu);
    ogrencisayisi++;
    toplam+=notu;
}
toplam++;
ogrencisayisi--;
ortalama=toplam/ogrencisayisi;
printf("ortalama: %f",ortalama);











    return 0;
}
