#include<stdio.h>
#include<math.h>
int main()
{
    int l, b, area, per;
    printf("enter the length amd bredth of the rectangle");
    scanf("%d%d", &l, &b);
    per=(l+b)*2;
    area=l*b;
    if(area>per)
    {
        printf("area is greater than perimeter");
    }
    else
    {
        printf("perimeter is greater than area");
    }
    return 0;
}