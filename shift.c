#include<stdio.h>
void shift(int*,int*,int*);
int main()
{
    int x=5,y=8,z=10;
    printf("before shift x=%d\ny=%d\nz+%d",x,y,z);
    shift(&x,&y,&z);
    printf("after shift x=%d\ny=%d\nz=%d",x,y,z);
    
}
void shift(int*a,int*b,int*c)
{
    int z;
    z=*c;
    *c=*b;
    *b=*a;
    *a=z;
}