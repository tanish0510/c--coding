#include<stdio.h>
int main()
{
    int age;
    char ms,sex;
    printf("enter ms,sex");
    scanf("%c%c", &ms,&sex);
    printf("enter age");
    scanf("%d", &age);
    if(((ms=='M'))|| ((ms=='U')&& (age>30) &&(sex=='M')) || ((ms=='U')&&(sex=='F')&& (age>25)))
    printf("insured");
    else 
    printf("not insured");
    return 0;
}