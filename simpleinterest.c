/* calculation of simple interest*/
#include<stdio.h>
int main()
{
    int p , t;
    float r, si;
    p=1000;
    r=6.5;
    t=4;
    si=(p*r*t)/100;
    printf("the simple interest is: %f" , si);
    return 0;
}