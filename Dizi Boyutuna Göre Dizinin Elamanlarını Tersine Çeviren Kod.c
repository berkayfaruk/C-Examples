#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,S,temp;
    int A[10];
    printf("Dizinin Boyutunu Giriniz: ");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        printf("Dizinin Elamanlarini Giriniz: ");
        scanf("%d",&A[i]);
    }
    S=N/2;
    for(int i=0;i<S;i++)
    {
        temp=A[i];
        A[i]=A[N-i-1];
        A[N-i-1]=temp;
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}
