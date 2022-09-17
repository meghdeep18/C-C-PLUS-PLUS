#include<stdio.h>

 main()
{
   float fahrenheit, celsius;
   
   printf("Enter Fahrenheit: \n");
   scanf("%f",&fahrenheit);
   
   celsius = (fahrenheit - 32)*5/9;
   printf("Celsius: %f \n", celsius);
   return 0;
}