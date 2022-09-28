#include<iostream>

using namespace std;

int main() 
{
  for ( int i=1;i<=5;i++ )
  {
    int n = 64;
    int space = 5-i;
    int temp = 5-i;
    while( space>0 )
	{
      cout << " ";
      space--;
    }
    while( 5-temp>0 )
	{
      n++;
      cout<< char(n);
      temp++;
    }
    while( n>65 ){
      n--;
      cout<< char(n);
    }
    cout << "\n";
  }
  return 0;
}
