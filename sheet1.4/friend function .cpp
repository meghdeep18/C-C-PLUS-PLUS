#include<iostream>
using namespace std ; 

class person 
{
	private :
		int age ;
		
		friend void input(person obj);
		
};

void input(person obj)
{
	cout <<" Enter your age  :";
	cin>>obj .age;
	cout<<"your age :"<<obj.age;
}
main ()
{
	person obj ;
	input ( obj);
}