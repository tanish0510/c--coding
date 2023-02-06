#include<stdio.h>
<<<<<<< Updated upstream
#define N 5
int main()
{
    int a[5], *p;
    printf("enter  elememts in the array:", N);
=======

int main()
{
    int a[5], *p,N[6];
    printf("enter  elememts in the array:");
    scanf("%d", &N[6]);
>>>>>>> Stashed changes
    for(p=a; p<=a+N-1; p++)
    {
        scanf("%d", p);
    }
    printf("elements in reverse order are:\n");
    for(p=a+N-1; p>=a; p--)
    printf("%d", *p);
    return 0;
    }