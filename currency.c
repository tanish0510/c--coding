#include<stdio.h>
#include<math.h>
int main()
{
    int  amount,hun, fifty, five , two , one , total;
    printf("enter the amount");
    scanf("%d", &amount);
    hun=amount/100;
    amount=amount%100;
    fifty=amount/50;
    amount=amount%50;
    five=amount/5;
    amount=amount%5;
    two=amount/2;
    amount=amount%2;
    one=amount/1;
    amount=amount%1;
    total=hun+fifty+five+two+one;
    printf("the smallest denominations are=%d\n", total);
    return 0;
}