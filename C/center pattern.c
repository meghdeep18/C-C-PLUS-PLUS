#include<stdio.h>
main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(k=5;k<=i;k++)
		{
			printf("* ");
		}
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}