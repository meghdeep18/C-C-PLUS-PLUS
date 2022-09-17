#include<iostream>
using namespace std ;
//multiple  
class A
{
  	public :
  		void displayA()
  		{
  		 cout<<"UR INSIDE OF CLASS A";	
		}
	
};
class B  
{
  	public :
  		void displayB()
  		{
  		 cout<<"UR INSIDE OF CLASS B";	
		}
	
};
class C : public A ,public B
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
	
	c.displayA();
	cout<<"\n";
	c.displayB();
	cout<<"\n";
	c.displayC();
	cout<<"\n";
}
