#include<stdio.h>
int main()
{
    int ,mat1[1][1]={
                 {2,4},
                 {6,5},
    };
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("the original matrix is:\n");
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");

    }
    int mat2[1][1];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        mat2[i][j]=mat1[j][i];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j+=)
        printf("the transpose is:\n");
        printf("%d\t",mat2[1][1]);
        printf("\n");
    }
}