#include<stdio.h>
#include<math.h>
int main ()
{
    float h,w,bmi;
    printf("enter the height(in meters)");
    scanf("%f", &h);
    printf("enter the weight(in kilograms)");
    scanf("%f", &w);
    bmi=w/pow(h,2);
    if(bmi<15)
    {
        printf("starvation");
    }
    if(bmi>15.1 && bmi<17.5)
    {
        printf("anorexic");
    }
    if(bmi>17.6 && bmi<18.5)
    {
        printf("underweight");
    }
    if(bmi>18.6 && bmi<24.9)
    {
        printf("ideal");
    }
    if(bmi>25 && bmi<25.9)
    {
        printf("overweight");
    }
    if(bmi>30 && bmi<30.9)
    {
        printf("obese");
    }
    if(bmi>=40)
    {
        printf("morbidly obese");
    }
    return 0;
}