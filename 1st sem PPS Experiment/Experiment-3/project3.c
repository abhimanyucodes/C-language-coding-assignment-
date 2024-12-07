//3.WAP to compute grade of student using if else adder.
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if(marks<50&&marks>=0)
    {
        printf("Grade: F ");
    }
    else if(50<=marks&&marks<60)
    {
        printf(" Grade: C");
    }
    else if(60<=marks&&marks<70)
    {
        printf("Grade: B ");
    }
    else if(70<=marks&&marks<80)
    {
        printf("Grade: B+ ");
    }
    else if (80<=marks&&marks<90)
    {
        printf("Grade: A ");
    }
    else if (90<=marks&&marks<=100)
    {
        printf("Grade: A+ ");
    }
    else
    {
        printf("INVALID DATA");
    }

}