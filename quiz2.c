#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilo,boy,vct;
    printf("Kilo degerinizi giriniz(kg)");
    scanf("%f",&kilo);
    printf("Boy degerinizi giriniz(m)");
    scanf("%f",&boy);
    vct=kilo/(boy*boy);
    printf("\nVucut Kitle Endeksiniz= %f\n\n",vct);
    if(vct>=0 && vct<=18.4)
        printf("Ýdeal kilonuzun altindasiniz !");
    else if(vct>=18.5 && vct<=24.9)
        printf("Kilonuz tamamen normal");
    else if (vct>=25)
        printf("Ýdeal kilonuzun ustundesiniz !");



    return 0;
}
