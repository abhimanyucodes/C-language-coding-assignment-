//3. WAP to reverse a given integer.
#include<stdio.h>
void main()
{
   int n,i,mod,store=0;
    printf("Enter Digit: ");
    scanf("%d",&n);

  while(n>0)
  {
   mod=n%10;
   store=store*10+mod;
   n=n/10;
  }
  printf("Reverse of a given integer: %d",store);
  
    
}
