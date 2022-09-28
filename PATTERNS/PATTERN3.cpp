#include<iostream>

using namespace std;

int main() 
{
  for ( int i=1;i<=9;i++ )
  {
    if( i<=5 ){
      for( int j=0;j<i;j++ )
	  {
        cout << "*";
      }
    }
    else{
      for( int j=0;j<10-i;j++ )
	  {
        cout << "*";
      }
    }
    cout << "\n";
  }
  return 0;
}
