#include<stdio.h>
#define size 3
int main()
{
    int a[size][size];
    int b[size][size];
    int row,col,issymmetric;
    printf("enter elements in the matrix:");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d", &a[row][col]);
        }
        for(row=0; row<size; row++)
    
    {
        for(col=0; col<size; col++)
        {
          
            b[row][col] = a[col][row];
        }
    }
issymmetric = 1;
    for(row=0; row<size && issymmetric; row++)
    {
        for(col=0; col<size; col++)
        {
            
            if(a[row][col] != b[row][col])
            {
                issymmetric = 0;
                break;
            }
        }
    }
        if(issymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(row=0; row<size; row++)
        {
            for(col=0; col<size; col++)
            {
                printf("%d ", a[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }
    return 0;


    }
}
