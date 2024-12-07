//1.check given no is odd or even 
#include<stdio.h>
void main()
{
    int n;
    printf("Enter no : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given no is Even");
    }
    else
    {
        printf("Given no is Odd");
    }
}