//2.wap to find the largest of three given no 
#include<stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1>num2 && num1>num3)
    {
        printf("%d is Greater ",num1);
    }
      else if(num2>num1 && num2>num3)
      {
        printf("%d id Greater",num2);
      }
      else{
        printf("%d id Greater",num3);
      }
}