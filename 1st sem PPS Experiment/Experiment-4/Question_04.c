//4. WAP to print the sum of digit of a number using for loop.
#include<stdio.h>
void main()
{
    int n,i,sum=0,store;
    printf("Enter Digit: ");
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        store=n%10;
        sum=sum+store;
        n=n/10;
    }
    printf("Sum of given digit of a number: %d",sum);
}