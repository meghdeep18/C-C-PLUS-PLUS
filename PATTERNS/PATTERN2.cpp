#include<iostream>

using namespace std;

int main() 
{
  int stars = 1;
  for ( int i=1;i<=5;i++ )
  {
    int gap = 5 - i;
    while ( gap > 0 )
	{
      cout << " ";
      gap--;
    }
    int temp = stars;
    while ( temp > 0 )
	{
      cout << "*";
      temp--;
    }
    stars += 2;
    cout << "\n";
  }
}
  
