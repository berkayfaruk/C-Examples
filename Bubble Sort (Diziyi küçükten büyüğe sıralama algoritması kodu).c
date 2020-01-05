#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void bublesort(int[],int);
int main()
{
    int arr[MAX],boyut;
    int i;
    printf("Kac elamanli olsun: ");
    scanf("%d",&boyut);
    for(i=0;i<boyut;i++)
    {
        scanf("%d",&arr[i]);
    }
    bublesort(arr,boyut);
    for(i=0;i<boyut;i++)
    {
        printf("%d ",arr[i]);
    }
}

void bublesort(int arr[],int size)
{
    int i,j,gecici;
    for(i=0;i<size;i++)
    {
        for(j=1;j<size-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                gecici=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=gecici;

            }
        }
    }
}











