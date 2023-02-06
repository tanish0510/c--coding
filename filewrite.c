#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    printf("enter the character");
    scanf("%c", &ch);
    
    fp=fopen("abc.txt", "w");
    
    
    fputc(ch,fp);
    fclose(fp);
    return 0;
}