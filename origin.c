#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("enter the co-ordinates");
    scanf("%d%d", &x,&y);
    if(x==0)
    {
        printf("the x co-ordinate is zero");
    }
    if(y==0)
    {
        printf("the y coordinate is zero");
    }
    if(x==0 & y==0)
    {
        printf("the point is at origin");
    }
    return 0;
}