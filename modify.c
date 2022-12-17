#include<stdio.h>
# deifne size 3

void modify( int *elem)
{
    int i; 
    for(i=0;i<10;i++,elem++)
    *elem *=3;
}
int main()
{
    int i;
    int a[]={1,2,3,4,5,6,7,8,9,100};
    modify(a);
    for(i=0;i<10;i++)
    printf("%d\n", a[i]);
    
    return 0;
}