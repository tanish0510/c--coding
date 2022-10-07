#include<stdio.h>
#include<math.h>
int main()
{
    float l1, l2, g1, g2, d;
    printf("enter the latitude1");
    scanf("%f", &l1);
    printf("enter latitude2");
    scanf("%f", &l2);
    printf("enter longitude1");
    scanf("%f", &g1);
    printf("enter longitude2");
    scanf("%f",&g2);
    d=3693*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("distance in nautical mines is:%f", d);
    return 0;
}
