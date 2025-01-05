//5. wap to multiply two 3x3 matrices.
#include<stdio.h>
void main()
{
 int matrix1[10][10],matrix2[10][10],multi[10][10],i,j,k,a,b,c,d,sum,sum1,sum2;


    printf("Enter First matrix element:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    scanf("%d",&matrix1[i][j]);
   }
  }
   printf("\n");

    
    printf("Enter Second matrix element:\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
    {
     scanf("%d",&matrix2[i][j]);
    }
    }
   
   

   printf("Matrix 1:\n");
     for(i=0;i<3;i++)
     {
   for(j=0;j<3;j++)
   {
    printf("%d\t",matrix1[i][j]);
   }
   printf("\n");
     }
     

     printf("\n");


   printf("Matrix 2:\n");
   for(i=0;i<3;i++)
   {
   for(j=0;j<3;j++)
   {
    printf("%d\t",matrix2[i][j]);
   }
   printf("\n");
   }
          

          printf("\n");
        printf("Multiplication of matrix 1 & matrix 2 is :\n");


     for(i=0;i<3;i++)
     {
   for(j=0;j<3;j++)
   {
      sum=0;
       for(k=0;k<3;k++)
       {
       sum=sum+matrix1[i][k]*matrix2[k][j];
       }
       multi[i][j]=sum;
      printf("%d\t",sum);
   }
      printf("\n");
     }
   
  

        
}
   


