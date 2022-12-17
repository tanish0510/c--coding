#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements you want to reverse:\n");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("enter the elements now:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}