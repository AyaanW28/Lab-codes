#include <iostream>
using namespace std;
int main()
{
	int age, creditHours, feePerCreditHour, totalFee,yearBirth,year25;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your credit hours: ";
	cin >> creditHours;
	cout << "Enter fee per credit hour: ";
	cin >> feePerCreditHour;
	totalFee = creditHours * feePerCreditHour;
	cout << "The Total Fees: " << totalFee << "\nTotal fees after discount: " << totalFee - 2000;
	yearBirth = 2026 - age;
	year25 = yearBirth + 25;
	cout << "\nThe year you were born (Assuming it's 2026): " << yearBirth << "\nThe year you will turn 25: " << year25;
	return 0;

	/*Experiment 1: When I run the program with value 19 15 8000 in one line or seperate them by tabs, the program executes different to when i execute it 
	in separate lines. The mathematical operations are performed the same but the program skips the part where it asks me for credit hours and fee per credit hour.
	This is because 15 and 8000 are already accepted by the program instantly.*/

	/*Experiment 2: When i input age as 19.8, the rest of the program automatically runs with garbage value. The age is saved as 19 and the year of birth and
	year of turning 25 are performed the same. However, the credit hour and fee per credit hour inputs are skipped and garbage value is used. The .8 is shifted
	to credit hour and due to int data type it is saved as 0 while fee per credit hour is skipped.*/
}