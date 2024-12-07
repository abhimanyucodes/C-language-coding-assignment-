// 3. wap to convert temperature Celsius to fahrenheit.
#include<stdio.h>
void main(){
    float Celsius,fahrenheit;
    printf("Temperature in celsius =  ");
    scanf("%f",&Celsius);
    fahrenheit = (Celsius*9/5)+32;
    printf("Temperature in fahrenheit =  %f",fahrenheit);
}