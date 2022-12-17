#include<stdio.h>
void weight(int*a,float*b);
int main()
{
    int g,p,w;
    printf("ener weight");
    scanf("%d", &w);
    printf("weight in grams is=%d\n Weight in pounds is=%d\n ",g,p);
}
void weight(int*a,float*b)
{
    int s;
    *a=1000**(&s);
    *b=*(&s)/2.205;
    

}
