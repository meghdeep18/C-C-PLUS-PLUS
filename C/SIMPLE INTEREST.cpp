#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("Enter ur principle amount:");
	scanf("%f",&p);
	
	printf("Enter rate of interest:");
	scanf("%f ",&r);
	r=r/100;
	
    printf("Enter time");
	scanf("%f",&t);
	
	si = p*(1+(r*t));
	
	printf("\nsimple interest = %f",si);
}