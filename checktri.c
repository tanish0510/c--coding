#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides of the triangle");
    scanf("%d%d%d", &a,&b,&c);
    if(a==b && a==c)
    {
        printf("the triangle is equilateral");
    }
    if(a==b || a==c || b==c)
    {
        printf("triangle is isosceles");
    }
    if(a!=b && c!=a && b!=c)
    {
        printf("triangle is scalene");
    }
    return 0;
}