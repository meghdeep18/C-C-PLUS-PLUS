#include<stdio.h>
main()
{
	float  pi = 3.14, r,ans;
	printf("Enter the radius of ur circle :");
	scanf ("%f",&r);
	
	//ans = 3.14*r*r;
   ans = pi * r * r;
	printf("Area of ur circle is = %f:",ans);
}