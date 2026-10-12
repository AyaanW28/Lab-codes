#include <iostream>
using namespace std;
int main()
{
	int rollNo = 1045, semester = 1, totalFee = 45000, feePaid = 20000;
	char section = 'B';
	float cgpa = 3.5;

	cout << "Roll No: " << rollNo << "\nSemester: " << semester << "\nSection: " << section << "\nCGPA: " << cgpa << "\nTotal Fees: " << totalFee << "\nFees Paid: " << feePaid << endl;

	semester = semester + 1;
	int secondIns=5000;
	feePaid = feePaid + secondIns;
	int remainingFee;
	remainingFee = totalFee - feePaid;
	float paid;
	paid = (float)(feePaid * 100 / totalFee);
	cout << "Semester: " << semester << "\nFee Paid: " << feePaid << "\nRemaining Fee: " << remainingFee << "\nPaid: " << paid << endl;

	//Invalid, can not start with number 2ndYear
	//Valid student_name
	//Invalid, can not contain spaces and - total - marks
	//Valid _fee
	//Invalid, can not contain space Roll No
	//Valid, marks2


}