#include<stdio.h>
int main(void)
{
   int j, a[20];
   printf("Enter the size of the array: ");
   scanf("%d", &j);

   printf("Enter array elements: \n");
   for(int i=0; i<j; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Even numbers in the array are: \n");
   for(int i=0; i<j; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }
   printf("\nOdd numbers in the array are: \n");
   for(int i=0; i<j; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }
   return 1;
}A