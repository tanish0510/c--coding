#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define VowelisOccur str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' \
	|| str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' \
	|| str[i] == 'U'
int find_vows(char*str)
{
    int i,count=0;
    printf("\nVowels in successions : ");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (VowelisOccur)
		{
			i++;
			if (VowelisOccur)
			{
				printf("%c%c ", str[i - 1], str[i]);
				count++;
			}
		}
	}
	return count;
}
int main()
{
    char str[100], tot_vow;
    printf("enter the strimg:");
    gets(str);
    tot_vow=find_vows(str);
    printf("total successions are:%d", tot_vow);
    
    return 0;
}

