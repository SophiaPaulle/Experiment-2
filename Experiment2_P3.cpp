#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	float V;
	const float z = 2.50;
	
	cout << "Input value of x: " ;
	cin >> x;
	cout << "Input value of y: " ;
	cin >> y;
	
	switch(x)
	{
		
		case 1:
			if (y>1 && y<5)
			{
				cout << setw(10) << fixed;
				cout << setprecision(2) << fixed;
				cout << "V=xyz : V = " << x*y*z;
			}
			else if (y>=5)
			{
				cout << setw(10) << fixed;
				cout << setprecision(2) << fixed;
				cout << "V=x+(y/z) : V =  " << x+(y/z);
			}
			break;
		
		case 2:
			
			if (y<=5)
			{
				cout << setw(10) << fixed;
				cout << setprecision(2) << fixed;
				cout << "V=|(x-y)/z| : V = " << abs((x-y)/z);
			}
			
			else if (y>5)
			{
				cout << setw(10) << fixed;
				cout << setprecision(2) << fixed;
				cout << "V=x-sqrt(y+z) : V = " << x-sqrt(y+z);
			}
			break;
		
		default:
			cout << setw(10) << fixed;
			cout << setprecision(2) << fixed;
			cout << "V=x+y+z : V = " << x+y+z;
	

	}

	getch();
	return 0;
}
