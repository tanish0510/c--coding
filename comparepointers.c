#include<stdio.h>
int main()
{
    int arr[]={12,3,3,4,5,6,7,7,8,9};
    int *p=&arr[4];
    int *q=&arr[7];
    printf("%d\n", p<=q);
    printf("%d\n", p>=q);
    q=&arr[4];
    printf("%d\n", p==q);
    return 0;
}