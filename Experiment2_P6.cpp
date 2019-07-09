#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main()

{
	int a, sum;
	
	while (a>0)
	{
		cout << "Input a number: ";
		cin >> a;
		
		if (a>0)
		{
			sum = (a*(a+1))/2;
			cout << "The sum of all whole numbers from 1 to " << a << " is " << sum << "." << endl << endl;
			continue;
		}
		else if (a<=0)
		{
			cout << "Merci !" << endl;
		}
		else
		{
			cout << "Error" << endl;
		}

	}
	
	
	getch();
	return 0;
}
