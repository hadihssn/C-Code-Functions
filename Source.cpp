#include<iostream>
using namespace std;

// Task A
void a(int& x, int& y, char& z)
{
	x = y = 0;
	z = NULL;
}

// Task B
void getHoursRate(double& rate, double& hours)
{
	double _rate = 0, _hours = 0;
	cout << "Enter hours worked: ";
	cin >> _hours;
	cout << "\n\nEnter rate per hour: ";
	cin >> _rate;

	rate = _rate;
	hours = _hours;
}

// Task C
double payCheck(double rate, double hours)
{
	if (hours <= 40)
	{
		return rate;
	}
	else if(hours > 40)
	{
		return 1.5 * hours;
	}
}

// Task D
void printCheck(double rate, double hours, double amount)
{
	cout << "\nTotal salary: " << amount;
	cout << "\nTotal hours worked: " << hours;
	cout << "\nRate per hour: " << rate;
}

// Task E
void funcOne(int& x, int y)
{
	int temp = x;
	cout << "\n\nEnter a number: ";
	int number = 0;
	cin >> number;

	x = (temp* temp) + (y - number);
}

// Task F
void nextChar(char& z)
{
	z = z + 1;
}

// Main File
int main()
{
	int x, y;
	char z;
	double rate, hours;
	double amount;

	//task a
	a(x, y, z);

	//task b
	getHoursRate(rate, hours);

	//task c
	amount = payCheck(rate, hours);

	//task d
	printCheck(rate, hours, amount);

	//task e
	funcOne(x, y);

	z = 'a';
	//task f
	nextChar(z);

	return 0;
}