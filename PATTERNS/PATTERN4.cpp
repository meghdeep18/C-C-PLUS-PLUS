#include<iostream>

using namespace std;

int main()
 {
  int stars = 9;
  for ( int i=5;i>0;i-- )
  {
    int gap = 5 - i;
    while ( gap > 0 ){
      cout << " ";
      gap--;
    }
    int temp = stars;
    while ( temp > 0 
	){
      cout << "*";
      temp--;
    }
    stars -= 2;
    cout << "\n";
  }
  
  return 0;
}
  
