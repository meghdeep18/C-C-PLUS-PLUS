#include <iostream>
using namespace std;
int main()
{
	int num, count;
    
    cout << "Enter a number: ";
    cin >> num;

    for (count = 0; num >0; count++)
	{
        num = num / 10;
    }
    
    cout << "Total no. of digits: " << count << endl;
    return 0;
}
