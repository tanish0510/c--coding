#include<stdio.h>
#include<math.h>
int main()
{
    int match_sticks=21 , user_choice , computer_choice;
    while(match_sticks>=1)
 {
    printf("total match sticks=%d\n", match_sticks);
    printf("pick up match sticks(between 1-4)\n");
    scanf("%d", &user_choice);
    if(user_choice>4)
    {
        printf("invalid entry DON'T TRY TO BE SMART");
        break;
    }
    computer_choice=5-user_choice;
    printf("the computer pickes up %d match sticks\n", computer_choice);
    match_sticks=match_sticks-user_choice-computer_choice;
    if(match_sticks==1)
    {
        printf("you have lost the game via computer");
        break;
    }
}
    return 0;
}