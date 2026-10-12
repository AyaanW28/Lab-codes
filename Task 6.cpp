#include <iostream>
using namespace std;
int main()
{
	int price, quantity, total, tax, grandTotal;
	cout << "Enter the price of item: ";
	cin >> price;
	cout << "Enter the quantity of the item: ";
	cin >> quantity;
	total = price * quantity;
	tax = total * 5 / 100;
	grandTotal = total + tax;
	cout << "The Total is: " << total << "\nTax is: " << tax << "\nGrand Total: " << grandTotal;
	return 0;

	/*A calculator gives the value 34.65 while the program gives 34 only.This is because calculator gives the value in decimals (Float) while we are using int data type
	due to which the values after the decimal point are not shown.*/
}