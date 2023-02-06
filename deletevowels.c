#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,len=0;
    char str[200];
    printf("enter the string:-");
    scanf("%s", str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
    for(j=i;j<len;j++)
    {
    str[j]=str[j+1];
    }
    i--;
    len--;
    }
    str[len+1]='\0';
    }
    printf("after deleting the vowels the string is like:%s",str);
    return 0;

}