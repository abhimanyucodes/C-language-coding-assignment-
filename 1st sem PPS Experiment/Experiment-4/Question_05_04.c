//5.(04) WAP to display star pattern.
#include<stdio.h>
void main()
{
    int i,j,n=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",n);
            n++;
        }
        printf("\n");
    }

}