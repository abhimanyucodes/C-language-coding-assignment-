//4.WAP to check the number positive ,negative or zero
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Given number is POSITIVE");
    }
    else if (num<0)
    {
        printf("Given number is NEGATIVE");
    }
    else if (num==0)
    {
        printf("Given number is ZERO");
    }
}