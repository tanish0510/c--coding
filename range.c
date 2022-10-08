#include<stdio.h>
#include<limits.h>
int main()
{
    int num, num_min, num_max;
    int min= num_min;
    int max= num_max;
    char choice='y';
    do{
        printf("emter an integer");
        scanf("%d", &num);
        if(num>min)
        min=num;
        if(num<max)
        max=num;
        printf("Do you want to add another integer(y/n)?:");
        scanf(" %c", &choice);
    }
    while(choice=='Y' || choice=='y');
    printf("Range is %d:", (min-max));
    return 0;
}

