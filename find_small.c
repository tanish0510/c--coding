#include<stdio.h>

void minnum(int a[],int len[],int *min)
{
    int i;
    *min=a[0];
    for(i=0;i<=*len;i++)
    {
    if(a[i]<*min)
    *min=a[i];
    }
}
    
int main()

{
    int a[]={1,2,3,4,5,6,7,8,9};
    int min;
    int len= sizeof(a)/sizeof(a[0]);
    minnum(a,&len,&min);
    printf("%d is the minimum number", min);
    return 0;


}