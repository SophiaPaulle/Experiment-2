#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main()
{
	float x, y, bal;
	int r;
	
	cout << "State previous month's meter reading water consumption (in gallons): ";
	cin >> x;
    
	cout << "State the recent month's meter reading of water consumption (in gallons): ";
	cin >> y;
    
	cout << "Specify the meter reading (in gallons): " << y-x << endl; 
    
	cout << "Are there any remaining balance in your account? (Enter 1 if yes, else 0 for no) ";
	cin >> r;
	
	if (r==0)
		cout << "Specify the amount of total water bill : Php " << ((y-x)*1.10+35);
	else if (r==1)
	{
		cout << "Specify the amount of remaining balance? : ";
		cin >> bal;
		cout << "Specify the amount of total water bill: Php " << ((y-x)*1.10)+(35+20+bal);
	}
	else 
		cout << "Invalid Input" ;
	
	
	getch();
	return 0;	
}
