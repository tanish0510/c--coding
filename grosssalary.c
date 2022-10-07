#include<stdio.h>
int main()
{
    float ba;
    float da;
    float hra;
    float gsa;
    printf("enter basic allowance of ramesh");
    scanf("%f" , &ba);
    da=0.4*ba;
    hra=0.2*ba;
    gsa=da+hra+ba;
    printf("basic allowance=%f\n", ba);
    printf("dearness allowance=%f\n", da);
    printf("house rent allowance=%f\n", hra);
    printf("gross salary of ramesh is %f\n", gsa);
    return 0;
}