#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,domain,environment;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    domain=3.14*r*r;
    environment=3.14*2*r;
    printf("Apartment area: %f\n",domain);
    printf("Circumference of the apartment: %f\n",environment);
    if (domain>environment)
        printf("The area of the circle is larger than the perimeter");
    else
        printf("The area of the circle is smaller than the perimeter");
getch();
    return 0;
}
