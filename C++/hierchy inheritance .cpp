#include<iostream>
using namespace std ;
//hierchy 
class A
{
  	public :
  		void displayA()
  		{
  		 cout<<"UR INSIDE OF CLASS A";	
		}
	
};
class B  : public A
{
  	public :
  		void displayB()
  		{
  		 cout<<"UR INSIDE OF CLASS B";	
		}
	
};
class C : public A
{
  	public :
  		void displayC()
  		{
  		 cout<<"UR INSIDE OF CLASS C";	
		}
	
};

main()
{
	A a;
	B b;
	C c;
	
	a.displayA();
	cout<<"\n\n";
	
 	b.displayA();
 	cout<<"\n";
 	b.displayB();
 	cout<<"\n";
 	cout<<"\n";cout<<"\n";
 	
 	c.displayA();
 	cout<<"\n";
 	c.displayC();
}