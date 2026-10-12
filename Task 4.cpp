#include <iostream>
using namespace std;
int main()
{
	int rollNo = 1045, semester = 1, totalFee = 45000, feePaid = 20000, remainingFee, secondIns = 5000;
	char section = 'B';
	float cgpa = 3.5,paid;
	cout << "Roll No: " << rollNo << "\nSemester: " << semester << "\nSection: " << section << "\nCGPA: " << cgpa << "\nTotal Fees: " << totalFee << "\nFees Paid: " << feePaid << endl;
	semester = semester + 1;
	feePaid = feePaid + secondIns;
	remainingFee = totalFee - feePaid;
	paid = (float)(feePaid * 100 / totalFee);
	cout << "Semester: " << semester << "\nFee Paid: " << feePaid << "\nRemaining Fee: " << remainingFee << "\nPaid: " << paid << endl;

	//2ndYear is invalid, a variable name can't have a number at start
	
	//student_name is valid

	//total - marks is invalid as variable name can't have space and -

	//_fee is valid

	//Roll No is invalid, can't contain spaces

	//marks2 is valid


}