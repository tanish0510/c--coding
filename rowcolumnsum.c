#include<stdio.h>
int main()
{
    int arr[5][5]={
                   {1,2,3,4,5},
                   {6,7,8,9,0},
                   {11,2,3,4,5},
                   {2,3,4,5,6},
                   {3,45,67,99,90}
                   };
    int i,j;
    int sum=0;
    //row sum
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        sum+= arr[i][j];
        }
        printf("%d\n", sum);
        sum=0;

    }
    //column sum
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
        sum+=arr[j][i];
        }
        printf("%d\n", sum);
        sum=0;

    }
    return 0;
}