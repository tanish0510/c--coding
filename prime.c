#include<stdio.h>
#include<math.h>
int prime(int x);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    prime(num);
}
int prime(int x)
{
    int a;
    for(a=2;a<=x;a++)
    {
        if(x%a==0)
        {
            printf("%d\t", a);
            x=x/a;
            a--;
        }
    }
    return 0;
}



