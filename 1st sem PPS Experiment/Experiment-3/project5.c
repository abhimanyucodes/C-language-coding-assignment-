//5.WAP to check whether the entered year is leap year or not.
#include <stdio.h>
void main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
   if ((year%4==0 && year%100!= 0) || (year%400==0))
    {
        printf("%d is a Leap Year  ",year);
    }
    else{
        printf("%d is not a Leap Year",year);
    }
}