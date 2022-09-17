#include<stdio.h>
main()
{ 

  int i,j,n;
 
  for(i=1;i<=5;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  	 printf("* ");
	}
	printf("\n");
  }
  for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
  
}