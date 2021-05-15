#include<stdio.h>
void main()
{
 int i,j,n;
 printf("\n Enter the value of n:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  for(j=0;j<i;j++)
  {
   if((i+j)%2==0)
   {
  printf("01");
   }
 else
 {
  printf("01");
 }
  }
 printf(" ");
 }

}
