#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
    FILE *fp;
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);

    }
    fputs("tanny", fp);
    printf("success");
    fclose(fp);
    return 0;

}