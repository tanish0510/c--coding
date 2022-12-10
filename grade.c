#include<stdio.h>
int main()
{
    int marks,n1,n2,n3,n4,n5;
    printf("enter marks of 5 subjects of a student");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    marks=n1+n2+n3+n4+n5/5;
    if(marks>=75)
    {
        printf("grade is distiction");
    }
    else if(marks>=60 && marks<75)
    {
        printf("first divison");
    }
    else if(marks>=50 && marks<60)
    {
        printf("second division");
    }
    else if(marks>=40 && marks<50)
    {
        printf("third divison");
    }
    return 0;
}