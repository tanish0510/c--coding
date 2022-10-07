#include<stdio.h>
#include<math.h>
int main()
{
    float s,c,t,cs, sc,ct,  ang;
    printf("enter the angle");
    scanf("%f", &ang);
    s=sin(ang);
    c=cos(ang);
    t=tan(ang);
    cs=1/s;
    sc=1/c;
    ct=1/t;
    printf("all trig ratios are:%f\n%f\n%f\n%f\n%f\n%f\n", s,c,t,sc,cs,ct);
    return 0;
}