#include<stdio.h>
int main()
{
    int maths,sst,sci,eng,comp;
    int aggr;
    float per;
    printf("enter marks of 5 subjects");
    scanf("%d%d%d%d%d", &maths, &sst, &sci, &eng, &comp);
    aggr=maths+sst+sci+eng+comp;
    per=aggr/5;
    printf("the average score is=%f\n", per);
    return 0;
}