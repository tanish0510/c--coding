#include<stdio.h>
int main()
{
    int w=841 , h=1189, t, i;
    for(i=0;i<9;i++)
    {
        printf("\nA%d: %d*%d",i , w, h);
        t=h;
        h=w;
        w=t/2;
    }
    return 0;
}