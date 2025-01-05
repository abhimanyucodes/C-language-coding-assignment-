//4. WAP For addition of two matrices of any order in c.
#include<stdio.h>
void main()
{
 int matrix1[10][10],matrix2[10][10],multi[10][10],i,j,k,a,b,c,d,sum,sum1,sum2;
 printf("Enter order of the First matrix (rows and columns)\n");
 scanf("%d%d",&a,&b);
 printf("Enter order of the Second matrix (rows and columns)\n");
 scanf("%d%d",&c,&d);


 
    printf("Enter First matrix element:\n");
  for(i=0;i<a;i++){
   for(j=0;j<b;j++){
    scanf("%d",&matrix1[i][j]);
   }
  }
   printf("\n");
 
    
    printf("Enter Second matrix element:\n");
    for(i=0;i<c;i++){
     for(j=0;j<d;j++){
     scanf("%d",&matrix2[i][j]);
    }
    }
   
   

   printf("Matrix 1:\n");
     for(i=0;i<a;i++){
   for(j=0;j<b;j++){
    printf("%d\t",matrix1[i][j]);
   }
   printf("\n");
     }
     

     printf("\n");


   printf("Matrix 2:\n");
   for(i=0;i<c;i++){
   for(j=0;j<d;j++){
    printf("%d\t",matrix2[i][j]);
   }
   printf("\n");
   }
          

          printf("\n");
        printf("Addition of matrix 1 & matrix 2 is :\n");


    for(i=0;i<a;i++){
   for(j=0;j<d;j++){
       sum=0;
       sum=sum+matrix1[i][j]+matrix2[i][j];
      printf("%d\t",sum);
       
   }
   printf("\n");
  

        

   
 
}
}



