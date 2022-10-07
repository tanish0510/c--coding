#include<stdio.h>
int main()
{
    float r, g , b , c , m , y , k , rf , gf , bf , max, w;
    printf("enter the value of red(0-255)");
    scanf("%f", &r);
    printf("enter value of green(0-255)");
    scanf("%f", &g); 
    printf("enter value of blue(0-255)");
    scanf("%f", &b);
    rf=r/255;
    gf=g/255;
    bf=b/255;
    max=rf;
    if(max<gf)
    max=gf;
    if(max<bf)
    max=bf;
    w=max;
    c=(w-rf)/w;
    m=(w-gf)/w;
    y=(w-bf)/w;
    k=1-w;
    printf("the value of cyan is:%f\n", c); 
    printf("the value of magenta is:%f\n", m);
    printf("the value of yellow is:%f\n", y);
    printf("the value of black is:%f\n", k);
    return 0;
 }