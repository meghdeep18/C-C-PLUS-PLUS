#include<stdio.h>
main()
{
	int marks[5],i;

	for(i=0;i<5;i++)
	{
		printf("\nEnter marks [%d]",i);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n marks[%d]= %d",i,marks[i]);
	}
}