#include<stdio.h>
main()
{
int n ,a ,b, ans ;

 printf("Select any operation to perform ");
  printf("\n1.Addition " );
  printf("\n2.subtraction ");
  printf("\n3.muntiplication");
  printf("\n4.division\n");
  scanf("%c",&n);


printf("Enter number A: ");
scanf("%d",&a);
printf("Enter number B: ");
scanf("%d",&b);

 
  
  switch(n)
{

case 1: 
 ans = a + b ;
 printf ("\n.additon = %d",ans);
 break;
 
 ans = a - b ;
 printf ("\n.subtraction  = %d",ans);
 break;
 
 ans = a * b ;
 printf ("\n.muntiplication = %d",ans);
 break;
 
 ans = a / b ;
 printf ("\n.division = %d",ans);
 break;
}
}