#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	int pA, pB, pC, hrs;
	char package;
	
	pA = 995;
	pB = 1495;
	pC = 1995;
	
	cout << "Input the package you purchased (A, B, C): ";
	cin >> p; 
	cout << "Specify the time (in hours) you have used the subscription package? : ";
	cin >> hrs;
	
	switch (p)
	{
		case 'a':
		case 'A':
			if (hrs<=10)
			{
				cout << "Total monthly bill is: Php " << pA << endl;	
			}
			else
			{
				cout << "Total monthly bill is: Php " << pA + ((hrs-10)*20) << endl;
			}
			break;
			
		case 'b':
		case 'B':
			if (hrs<=20)
			{
				cout << "Total monthly bill is: Php " << pB << endl;
			}
			else
			{
				cout << "Total monthly bill is: Php " << pB + ((hrs-20)*10) << endl;
			}
			break;
			
		case 'c':
		case 'C':
			cout << "Total monthly bill is: Php " << pC << endl;
			break;
			
		default:
			cout << "Invalid Package" << endl;
		}
		
		
		getch();
		return 0;
	}
