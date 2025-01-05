//2. WAP to perform addition of all element in Array
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter no of element: ");
    scanf("%d",&n);
     int num[n];
    printf("Enter number for addition:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[n]);
        sum=sum+num[n];
    }
    printf("Addition of all element in Array is= %d",sum);
}