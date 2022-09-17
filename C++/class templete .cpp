#include<iostream>
using namespace std ;

template<class T>

class example 
{

	T a,b;
	public : 
	void  input()
	{
		cout<<"\n Enter value :";
		cin>>a>>b;
	}
	void display()
	{
		cout<<"\n A = "<<a<<"\n B = "<<b;
	}
};
main()
{
	 example<int> obj;
	 cout<<"\n ---------------for INT --------------";
	 obj.input();
	 obj.display();
	 
	  example<float>obj1;
	 cout<<"\n ---------------for float --------------";
	 obj.input();
	 obj.display();
	 	
	 example<double> obj3;
	 cout<<"\n ---------------for double--------------";
	 obj.input();
	 obj.display();
}