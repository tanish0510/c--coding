#include<stdio.h>
void minmax (int arr[], int len[], int*min, int*max)
{
    int i;
*min = *max =arr[0];
for(i=1;i<*len;i++)
    {
        if(arr[i] > *max)
        *max=arr[i];
        if(arr[i] < *min)
        *min=arr[i];

    }
}
int main()
{
    int arr[]={1,2,34,56,77,78,90,65,78,45,3,2,3,56,78,99,10,11,101,10};
    int min,max;
    int len=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,&len,&min,&max);
    printf("minimum value of array is:%d maximum value of array is:%d",min ,max);
    return 0;
}