//1. wap calculate simple interest.
#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter principle value (p)  =  ");
    scanf("%f",&p);
    printf("Enter rate of interest (r)  =  ");
    scanf("%f",&r);
    printf("Enter time period (t)  =  ");
    scanf("%f",&t);
    printf("Simple interest is (SI)=  %f",(p*r*t)/100);
    return 0;

}