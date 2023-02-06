#include<stdio.h>
int main()
{

    int a[50],size,pos,i;
    printf("enter the size of the array:\n");
    scanf("%d", &size);
    printf("enter the elements of array:\n");
    //checking bounds
    if(size>50)
    {
        printf("specified limit exceeded");

    }
    //storing values
    else
    {
         for(i=0;i<size;i++)
         scanf("%d",&a[i]);
    }
    printf("enter the position you want ot delelte:");
    scanf("%d",&pos);
    printf("deleted element is : %d\n",a[pos-1]);
    if(pos>size)
    {
        printf("invalid pos");
        
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        size--;
    }
    printf("elements of array are:\n");
    for(i=0;i<size;i++)
     
    {
        printf("%d\n",a[i]);
    }
   
    return 0;

    }