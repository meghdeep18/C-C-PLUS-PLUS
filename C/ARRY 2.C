#include<stdio.h>
main()
{
	int a[5],b[5],i,sum[5];
	printf("ENTER ARRY ELEMENT OF A");
	for(i=0;i<5;i++)
	{
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	printf("ENTER ARRY ELEMENT OF B");
	for(i=0;i<5;i++)
	{
		printf("\n enter b[%d]",i);
		scanf("%d",&b[i]);	
	}
    for(i=0;i<5;i++)
    {
    	sum[i] = a[i]+b[i]; 
	}
	printf("ADDITION OF ARRY ELEMENT :");
	
	for(i=0;i<5;i++)
	{
		printf("\nsum[%d] = %d",i ,sum[i]);
	}
}