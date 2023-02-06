#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[100];
FILE *fp;
fp=fopen("abc.txt","r");
if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp))
    {
    fgets(str,100,fp);
    printf("%s",str);
    }
return 0;

}