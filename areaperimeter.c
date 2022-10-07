#include<stdio.h>
int main()
{
    float l, b, r, arearec, per, areacir, circum;
    printf("enter the length and breadth of rectangle");
    scanf("%f%f", &l, &b);
    printf("enter raduis of circle");
    scanf("%f", &r);
    per=(l+b)*2;
    printf("the perimeter of rectangle is: %f\n", per);
    arearec=(l*b);
    printf("area of rectangle is: %f\n", arearec);
    areacir=(r*r)*3.14;
    circum=r*2*3.14;
    printf("area of circle is: %f\n", areacir);
    printf("circumference of circle is:%f\n", circum);
    return 0;
}