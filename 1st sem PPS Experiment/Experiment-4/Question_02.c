//2. WAP to count number of digit in a given integer.
#include<stdio.h>
#include<string.h>
void main()
{
  char digit[30];
  int count=0; 
   printf("Enter Digit:\n");
   scanf("%s",digit);
  
   count=strlen(digit);
   printf("%d",count);
}
