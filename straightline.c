#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,z1,z2,slope1,slope2;
    printf("enter first co-ordinates");
    scanf("%d%d\n", &x1,&x2);
    printf("enter second co-ordinates");
    scanf("%d%d\n", &y1,&y2);
    printf("enter third co-ordinates");
    scanf("%d%d\n", &z1,&z2);
    slope1=(y2-y1)/(x2-x1);
    slope2=(z2-z1)/(x2-x1);
    if(slope1==slope2)
    {
        printf("they lie on same line");
    }
    else
    {
        printf("they do not lie on same line");
    }
    return 0;
}