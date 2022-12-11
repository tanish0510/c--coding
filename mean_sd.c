#include<stdio.h>
#include<math.h>
int main()
{
    int a[15]={-6,-12,-13,5,6,7,8,9,4,5,6,12,13,14,-15};
    int i,sum=0;
    float min, hell=0,sd,n=0;
    printf("your data is:");
    for(i=0;i<15;i++)
    {
        printf("%d\t", a[i]);
        sum=sum+a[i];
        n++;

    }
    min=sum/n;
    for(i=0;i<15;i++)
    hell=hell+pow((a[i]-(min)), 2);
    sd=(sqrt(hell))/n;
    printf("mean of the data is: %f\n",min);
    printf("standard deviation of the data is:%f\n",sd);
    return 0;


}