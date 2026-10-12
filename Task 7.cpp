#include <iostream>
using namespace std;
int main()
{
	int cel, fah;
	cout << "Enter temperature in celsius: ";
	cin >> cel;
	fah = cel * 9 / 5 + 32;
	cout << "Temperature in Fahrenheit: " << fah;
	return 0;
	//My program gives 98 instead of 98.6 because i used int as data type, it doesn't show decimal values
}