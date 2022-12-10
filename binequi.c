#include<stdio.h>
int non_rec_bin(int n);
int rec_bin(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    printf("decimal to binary with rec:%d\n", rec_bin(n));
    printf("decimal to binary without rec:%d\n", non_rec_bin(n));

}
int non_rec_bin(int n)
{
    int x,res=0,pos=1;
    while(n!=0)
    {
        x=n%2;
        res=res+(x*pos);
        pos=pos*10;
        n=n/2;
    }
    return res;


}
int rec_bin(int n)
{
    if(n==0)
    {
    return 0;
    }
    else
    {
        return ((n%2)+10*rec_bin(n/2));
    }

}