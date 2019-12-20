#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    printf("Karakter giriniz: ");
    scanf("%c",&karakter);
    if(karakter>47 && karakter<58)
        printf("Karakter rakam");
    else if ((karakter>64 && karakter<91) || (karakter>96 && karakter<123))
    {
        switch(karakter)
        {
            case 'a':
                printf("Sesli Harf");
                break;

            case 'A':
                printf("Sesli Harf");
                break;
            case 'e':
                printf("Sesli Harf");
                break;
            case 'E':
                printf("Sesli Harf");
                break;
            case 'i':
                    printf("Sesli Harf");
                    break;
            case 'I':
                    printf("Sesli Harf");
                    break;
            case 'o':
                    printf("Sesli Harf");
                    break;
            case 'O':
                printf("Sesli Harf");
                break;
            case 'u':
                printf("Sesli Harf");
                break;
            case 'U':
                printf("Sesli Harf");
                break;
            default:
                printf("Sessiz Harf");
                break;
        }

   }
   else
    printf("Ozel bir karakter girdiniz");

    return 0;
}
