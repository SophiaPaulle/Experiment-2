#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main()
{
	int a;
	cout << "Calculating..." << endl;
	for (a=1; a<=30; a++)
	{
		if (a>10)
		{
			a=a+1;
			cout << a << ",";
		}
		else
		{
			cout << a << ",";
		}
	}
	
	
	getch();
	return 0;
}
