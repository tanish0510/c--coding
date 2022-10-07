#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("enter the ages");
    scanf("%d%d%d", &a1, &a2, &a3);
    if(a1<a2 && a1<a3)
    {
        printf("ram is the youngest");
    }
    if(a2<a1 && a2<a3)
    {
        printf("shyam is the youngest");
    }
    if(a3<a1 && a3<a2)
    {
        printf("ajay  is the youngest");
    }
    return 0;
}