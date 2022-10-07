#include<stdio.h>
#include<math.h>
int main()
{
    float x, y, fi, r;
    printf("enter the absissa");
    scanf("%f", &x);
    printf("enter the ordinate");
    scanf("%f", &y);
    r=sqrt(x*x+y*y);
    fi=atan(y/x);
    printf("the polar co-ordinates are: (%f,%f)", r,fi);
    return 0;
}
