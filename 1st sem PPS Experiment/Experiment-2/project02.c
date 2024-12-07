//2.write a program to calculate the percentage of student marks obtained in 5 subject 
#include<stdio.h>
void main()
{
    char name[15];
    int roll_no,marks;
    float total, m,p,c,h,e,percentage;
    printf("enter name : ");
    scanf("%s",name);
    printf("enter roll_no : ");
    scanf("%d",&roll_no);
    printf("  enter marks :- \n ");
    printf("Mathematics : ");
    scanf("%f",&m);
    printf("Physics : ");
    scanf("%f",&p);
    printf("Chemistry: ");
    scanf("%f",&c);
    printf("English : ");
    scanf("%f",&e);
    printf("Hindi : ");
    scanf("%f",&h);
    total = m + p + c + h + e;
    percentage = (total/ 500)*100;  
    printf("Name: %s \n roll_no: %d\n Total marks: %f \n percentage: %f",&name,roll_no,total, percentage);

}