//5.(05) WAP to display star pattern.
#include<stdio.h>
void main()
{
    int i,j,n=1,space;
    for(i=1;i<=4;i++)
    {
        for(space=1;space<=4-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",n);
            n++;
        }
        printf("\n");
    }

}