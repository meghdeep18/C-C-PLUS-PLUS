#include<stdio.h>
main()
//addition 
{
	printf("ADDITION: \n");
	int a,b,ans;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	
	ans = a + b ;
    printf("\n addition of A and b = %d\n\n",ans);

//subtraction
printf("SUBTRACTION:\n\n");

	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	
	ans = a - b ;
    printf("\n subtraction of A and b = %d\n\n",ans);
    
    
//multiplication
    printf("MULTIPLICATION:\n");
    printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	
	ans = a * b ;
    printf("\n multiplication of A and b = %d\n\n",ans);
    
    
    
     printf("DIVISION:\n");
    printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	
	ans = a / b ;
    printf("\n Division of A and b = %d",ans);

}
