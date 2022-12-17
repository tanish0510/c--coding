#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fails,class;
    printf("enter class of a student");
    scanf("%d", &class);
    printf("enter failed subjects of a student");
    scanf("%d", &fails);
    switch(class)
    {
        case 1:
        class=1;
        if(fails>3)
        printf("grace of 5 marks per subject");
        break;
        case 2:
        class=2;
        if(fails>2)
        printf("4 grace marks per subject");
        break;
        case 3:
        class=3;
        if(fails>1)
        printf("no grace marks");
        else
        printf("grace marks of 5 per subject");
    }
    return 0;
}
