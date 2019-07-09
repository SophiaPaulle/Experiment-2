#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main()
{
	int a, a1, a2, num;
	a1 = 0;
	a2 = 1;
	cout << "Fibonacci Numbers: " << endl;
	
	for (a=0; a<=21; a++)
	{
		if (a==0)
		{
			cout << a1 << ", ";
			continue;
		}
		if (a==1)
		{
			cout << a2 << ", ";
			continue;
		}
		
		num = a1 + a2;
		a1 = a2;
		a2 = num;
		
		cout << num << ", ";
	}
	
	getch();
	return 0;
}
