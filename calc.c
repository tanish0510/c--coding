#include<stdio.h>
#include<conio.h>
int main()
{
    int num , i, count_p=0 , count_n=0 , count_z=0;
    int arr[100];
    printf("enter the numers");
    scanf("%d\n", &num);
    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]>0)
        {
            count_p++;
        }
        else if(arr[i]<0)
        {
            count_n++;
        }
        else if(arr[i]==0)
        {
            count_z++;
        }
        else
        {
            printf("wrong entry");
            break;
        }
}
    printf("positive numbers are:%d\n", count_p);
    printf("negative numbers are:%d\n", count_n);
    printf("number of zeroes are:%d\n", count_z);
    return 0;
}