//1. WAP to insert 5 element into an array and print the element of the array.
#include<stdio.h>
void main()
{
    char element[5];
    printf("Enter 5 element:-\n");
    for(int i=0;i<5;i++)
    { 
        scanf(" %c",&element[i]);
    }
    printf("entered 5 elements are = ");
     for(int i=0;i<5;i++) {
        printf("%c",element[i]);
    }
}