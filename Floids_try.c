#include<stdio.h>
int main()
{
   int n,i,j,k=1;
   printf("enter a number :");
   scanf("%d",&n);
   for(i =1; i<=n;i++)
   {
   	for(j =1; j<=i;j++)
      {
	     printf("%2d", k);
		 k++;	
	   }
	   printf("\n");
   }   	
	 return 0;
}