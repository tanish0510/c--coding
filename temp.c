#include<stdio.h>
int main()
{
    float cel, far;
    printf("enter the temperature in celcius");
    scanf("%f", &cel);
    far=(cel*1.8)+32;
    printf("the temperature in farenheit is=%f\n", far);
    return 0;
}