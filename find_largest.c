#include<stdio.h>
int main()
{
    int a[5][5]={
                {1,23},
                 {3,45},
                 {45,67},
                 {34,55},
                 {67,98}
                 };
    
    int big,i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    big=a[0][0];
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(a[i][j]>big)
            big=a[i][j];
        }
    }
    printf("\nlargest number in the matrix is :%d", big);
    return 0;
}